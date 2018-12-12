#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool  incre(int);
void solution(int);
void print_num(string);

bool incre(string& n)
{
	int len=n.size();
	int flow=0;
	for(int i=len-1;i>=0;i--)
	{
		int val=n[i]-'0'+flow;
		if(i==len-1)
			val++;
		n[i]='0'+val%10;
		if(val>=10)
		{
			if(i==0)
				return false;
			flow=1;
			//n[i]='0'+val%10;
		}
		else{
			break;
		}
	}
	return true;
}

void print_num(string str)
{
	int len=str.size();
	//int bit=0;
	bool flag=false;
	string str1;
	for(int i=0;i<len;i++)
	{
		if(str[i]>'0')
		{
			flag=true;
		}
		if(flag)
		{
			str1.push_back(str[i]);
		}
	}
	cout<<str1<<endl;
}

void solution(int n)
{
	string num(n,'0');
	while(incre(num))
	{
		print_num(num);
	}

}


int main()
{
	int n;
	cin>>n;
	solution(n);

	return 0;
}