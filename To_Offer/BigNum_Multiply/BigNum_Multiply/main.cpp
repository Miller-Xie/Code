#include <string>
#include <iostream>
#include <vector>
#include <deque>
#include <sstream>
using namespace std;

string BigMutiply(string str1,string str2)
{
	int len1=str1.size();
	int len2=str2.size();
	string result;
	deque<int> tmp(len1+len2-1,0);
	int temp=0;
	for (int i=0;i<str1.size();i++)
	{
		for (int j=0;j<str2.size();j++)
		{
			temp=(str1[i]-'0')*(str2[j]-'0');
			tmp[i+j]+=temp;
		}
	}

	int over=0,temp1=0;
	for (int i=tmp.size()-1;i>=0;i--)
	{
		temp1=tmp[i]+over;
		over=temp1/10;
		tmp[i]=temp1%10;
	}

	if(over>0)
	{
		tmp.push_front(over);
	}

	bool non_zero=false;
	stringstream stream;
	for (auto iter=tmp.begin();iter!=tmp.end();iter++)
	{
		stream << *iter;
	}
	stream>>result;
	return result;

}

int main()
{
	string num1,num2;
	while (cin>>num1>>num2)
	{
		cout << BigMutiply(num1,num2) <<endl;
	}
	return 0;

}