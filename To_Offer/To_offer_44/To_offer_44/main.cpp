#include <iostream>
#include <math.h>
#include <string>
using namespace std;

int get_pow(int base,int n)
{
	int res = 1;
	for(int i=0;i<n;i++)
	{
		res*=base;
	}

	return res;
}

int get_res(int index)
{
	if(index < 10)
		return index;

	int res;
	int cnt = 2;
	int target = index-10;
	int cur = 0;
	while(cur+get_pow(10,cnt-1)*cnt*9 <= target)
	{
		cur = cur+get_pow(10,cnt-1)*cnt*9;
		cnt++;
	}

	//cnt--;
	int base = get_pow(10,cnt-1);
	int inc = target-cur;
	int a = inc/cnt;
	int b = inc%cnt;
	string str;
	//int res = str[b] - '0';
	int val = a+base;
	while(val>0)
	{
		int a = val%10;
		val/=10;
		str.push_back('0'+a);
	}

	//reverse(str.begin(),str.end());
	res = str[str.size() - b - 1] - '0';

	return res;
}

int main()
{
	int num;
	cin >> num;

	cout << get_res(num) << endl;

	system("pause");
	return 0;
}



