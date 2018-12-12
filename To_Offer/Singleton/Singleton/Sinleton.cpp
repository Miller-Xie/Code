#include "./include/pthread.h"
//#include "./include/sched.h"
#include <stdio.h>
#include <iostream>
#include <windows.h>
//#include <pthread.h>

using namespace std;

std::_Mutex mut;

class Singleton{
private:
	Singleton(){
		//pthread_mutex_init(&mut,0);
	}

	static Singleton* p;
	
public:
	static pthread_mutex_t mut;
	static Singleton* getInstance(){
		if(!p){
			//有可能多个线程进入这里，所以内部再加一次条件判断
			pthread_mutex_lock(&mut);
			//mut->_Lock();
			if(!p)
				p = new Singleton();//双重锁定
			pthread_mutex_unlock(&mut);
		}
		return p;
	}
};

pthread_mutex_t Singleton::mut;
Singleton* Singleton::p = nullptr;

void* func1(void*){
	while (1)
	{
		Singleton* ptr1 = Singleton::getInstance();
		cout << "func1 address: " << ptr1 << endl;
		Sleep(1000);
	}
	
}

void* func2(void*){
	while (1)
	{
		Singleton* ptr2 = Singleton::getInstance();
		cout << "func2 address: " << ptr2 << endl;
		Sleep(1000);
	}
}

int main(){
	pthread_mutex_init(&Singleton::mut,0);
	pthread_t p1;
	pthread_t p2;

	int ret1 = pthread_create(&p1,0,func1,0);
	if(ret1!=0)
		printf("error\n");

	int ret2 = pthread_create(&p2,0,func2,0);
	if(ret2!=0)
		printf("error\n");

	pthread_join(p1,0);
	pthread_join(p2,0);
	return 0;
}
