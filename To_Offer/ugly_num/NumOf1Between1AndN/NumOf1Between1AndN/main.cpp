#include <iostream>
#include <vector>
#include <sstream>
#include "stdio.h"
#include "math.h"
#include "stdlib.h"
using namespace std;

int PowBase10(int n)
{
	int res=1;
	for(int i=0;i<n;i++)
	{
		res*=10;
	}
	return res;
}

int NumberOfN(const char* str)
{
	if(*str=='\0' || !str ||*str<'0' || *str>'9')
		return 0;
	
	int len=strlen(str);
	int first=*str-'0';
	if(len==1 && first==0)
		return 0;
	if(len==1 && first>0)
		return 1;

	int num_highest=0;

	if(first>1)
		num_highest=PowBase10(len-1);
	else if(first==1)
		num_highest=atoi(str+1)+1;

	int num_second=0;
	num_second=first*(len-1)*PowBase10(len-2);

	int num_lower=0;
	num_lower=NumberOfN(str+1);

	return num_lower+num_highest+num_second;
}

int NumberOf1Between1AndN_Solution(int n)
{
	if(n<=0)
		return 0;

	/*stringstream stream;
	stream<<n;
	string str_n=stream.str();*/
    char str_n[50];
	sprintf(str_n,"%d",n);


	return NumberOfN(str_n);

	

}

int main()
{
	int num;
	cin>>num;

	cout << NumberOf1Between1AndN_Solution(num)<<endl;
	
	system("pause");
	return 0;
	
}