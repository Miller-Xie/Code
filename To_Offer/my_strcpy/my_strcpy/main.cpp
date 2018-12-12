#include <stdio.h>
#include <cstring>
#include <assert.h>
#include <exception>
#include <stdexcept>
#include <iostream>
#include <string>
using namespace std;

char* my_strcpy(char* dst,char* src)
{
	try{
		if(dst==nullptr || src==nullptr)
			throw runtime_error("ptr is null!!!");

		char* tmp = dst;
		int len = strlen(src);
		if(tmp>src && tmp<src+len)
		{
			tmp=tmp+len;
			src=src+len;

			*tmp-- == *src--;
			int cnt=len;
			while(cnt>0)
			{
				*tmp-- == *src--;
				cnt--;
			}
		}
		else{
			while((*tmp++ = *src++)!='\0');
		}
		
		return dst;
	}
	catch(runtime_error err)
	{
		cout << err.what() << endl;
	}
}

int main()
{
	char* str1 = nullptr;
	//char* str2 = (char*)malloc(strlen(str1)*sizeof(char));
	char* str2=nullptr;
	my_strcpy(str2,str1);

	try{
		if(!str1)
			throw invalid_argument("str1 is invalid arg!!!");

		string res(str2);
		cout << res <<endl;
	}
	catch(...)
	{

	}
	

	system("pause");
	return 0;
}