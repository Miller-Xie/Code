#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
	int coinChange(vector<int>& coins, int amount) {
		if(coins.size()==0 || amount==0)
			return 0;

		sort(coins.begin(),coins.end());

		vector<int> dp(amount+1,0);
		dp[0]=0;
		for(int i=1;i<amount+1;i++)
		{
			int min=-1;
			for(int j=0;j<coins.size();j++)
			{
				int a=coins[j];
				if(a>i)
					break;
				else{
					if(dp[i-a]>-1)
					{
						int tmp=dp[i-a]+1;
						if(tmp<min || min==-1)
							min=tmp;
					}
				}
			}
			dp[i]=min;

		}

		return dp[amount];
	}
};

int main()
{
	int a,n;
	vector<int> vec;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		cin>>a;
		vec.push_back(a);
	}
	cin>>a;
	Solution s;
	s.coinChange(vec,a);

	return 0;
}