#include <vector>
#include <iostream>
#include <algorithm>
#include <numeric>
using namespace std;

bool isOK(vector<int> vec,int aim)
{
	int sum;
	sum=accumulate(vec.begin(),vec.end(),0);
	if(aim>sum)
		return false;
	
	int m=vec.size()+1;
	int n=sum;
	vector<vector<bool>> dp(m,vector<bool>(n,false));

	
	dp[m-1][0]=true;
	for(int i=1;i<sum;i++)
		dp[m-1][i]=false;

	for (int i=m-2;i>=0;i--)
	{
		for (int j=0;j<n;j++)
		{
			if(j<vec[i])
				dp[i][j]=dp[i+1][j]||false;
			else
				dp[i][j]=dp[i+1][j]||dp[i+1][j-vec[i]];
		}
	}
	return dp[0][aim];
}


int main()
{
	int aim;
	int n;
	vector<int> vec;
	cin>>aim;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		vec.push_back(a);
	}

	if(isOK(vec,aim))
		cout<<"is ok!"<<endl;
	else
	  cout << "is not ok!"<<endl;

	system("pause");
	return 0;

}