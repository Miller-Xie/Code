#include <iostream>
using namespace std;

class Singleton
{
private:
	static int a;
	Singleton(){}
	static Singleton* p;
public:
	static Singleton* instance();
};

int Singleton::a = 0;
Singleton* Singleton::p=new Singleton;
Singleton* Singleton::instance()
{
	return p;
}

int main()
{
	Singleton* s1=Singleton::instance();
	Singleton* s2=Singleton::instance();
	return 0;

}