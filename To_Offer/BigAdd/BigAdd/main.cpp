#include <iostream>
#include <string>

using namespace std;

string reserve(string s)
{
	string result;
	for (int i=s.size()-1;i>=0;i--)
	{
		result.push_back(s[i]);
	}
	return result;
}

string BigAdd(string str1,string str2)
{
	int len1=str1.size();
	int len2=str2.size();
	int max_len=len1>len2?len1:len2;

	str1=reserve(str1);
	str2=reserve(str2);
	string tmp(max_len,'0');
	int over=0;
	int i=0;
	for (;i<str1.size();i++)
	{
		int temp=str1[i]-'0'+ str2[i] - '0' + over;
		over=temp/10;
		tmp[i]=temp%10+'0';
	}
	int j=i;
	for(;j<str2.size();j++)
	{
		int temp1=str2[j]-'0'+over;
		over=temp1/10;
		tmp[j]=temp1%10+'0';
	}
	if(over)
	{
		tmp.push_back(over);
	}

	bool non_zero=false;
	for (int i=tmp.size()-1;i>=0;i--)
	{
		if(tmp[i]=='0')
		{
			tmp.pop_back();
		}
		else
			break;
	}
	return reserve(tmp);


}

int main()
{
	string num1,num2;
	while (cin>>num1>>num2)
	{
		//cout << BigAdd(num1,num2) <<endl;
		cout << num2+num1 <<endl;
	}
	return 0;

}