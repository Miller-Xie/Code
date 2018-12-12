//dfs解决八皇后问题
#include <bits/stdc++.h>

using namespace std;

int x[8];
int cnt;

bool is_ok(int n)
{
	for(int i=0;i<n;i++)
	{
		if(x[i]==x[n] || abs(n-i)==abs(x[n]-x[i]))
			return false;
	}
	return true;
}

void dfs(int num)
{
	if(8 == num)
	{
		cnt++;
		return;
	}
	for(int i=0;i<8;i++)
	{
		x[num]=i;
		if(is_ok(num))
			dfs(num+1);
	}
	return;
}

int main()
{
	/*for(int i=0;i<8;i++)
	{
		x[i]=0;
	}*/
	cnt=0;
	//cnt = 0;
	dfs(0);

	cout << cnt <<endl;
	system("pause");
	return 0;
}
