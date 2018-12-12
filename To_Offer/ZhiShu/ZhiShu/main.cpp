#include <bits/stdc++.h>
using namespace std;

int countPrimes(int n) {
	if(n<=2)
		return 0;
	if(n==3)
		return 1;

	vector<bool> flag(n+1,false);
	int cnt=1;
	flag[2]=true;
	for(int i=2;i<n;i++)
	{
		if(!flag[i])
		{
			cnt++;
		}

		int tmp=i*i;
		while(tmp<n)
		{
			flag[tmp]=true;
			tmp*=i;
		}
	}

	return cnt;
}

int main()
{
	cout << countPrimes(10) << endl;
	system("pause");
	return 0;
}