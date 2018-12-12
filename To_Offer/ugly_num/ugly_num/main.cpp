#include <bits/stdc++.h>

using namespace std;

int min(int a,int b,int c)
{
	int min;
	min = a>b?b:a;
	return min>c?c:min;
}

int GetUglyNumber_Solution(int index) {
	if(index <= 0)
		return 0;
	vector<int> ugly_vec;
	ugly_vec.push_back(1);
	int t2=0;
	int t3=0;
	int t5=0;
	int m2,m3,m5;
	while(ugly_vec.size()<index)
	{
		int len=ugly_vec.size();
		int max=ugly_vec[len-1];
		for(int i=t2;i<len;i++)
		{
			if(ugly_vec[i]*2>max)
			{
				t2=i;
				m2=ugly_vec[i]*2;
				break;
			}

		}
		for(int i=t3;i<len;i++)
		{
			if(ugly_vec[i]*3>max)
			{
				t3=i;
				m3=ugly_vec[i]*3;
				break;
			}

		}
		for(int i=t5;i<len;i++)
		{
			if(ugly_vec[i]*5>max)
			{
				t5=i;
				m5=ugly_vec[i]*5;
				break;
			}

		}
		ugly_vec.push_back(min(m2,m3,m5));

	}
	return ugly_vec[index-1];
}

int main()
{
	int a;
	cin>>a;
	cout << GetUglyNumber_Solution(a);
	system("pause");
	return 0;
}