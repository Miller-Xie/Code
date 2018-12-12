#include <vector>
#include <iostream>
using namespace std;

class sub
{
public:
	int b;
	int e;
	//sub(int a,int b):b(a),e(b){} 
};


class Solution {
public:
	int max_sub(vector<int> vec,int l,int r,sub& sub)
	{
		if(l>=r)
			return 0;

		int min=l;
		int max=0;
		for(int i=l+1;i<=r;i++)
		{
			if(vec[i]>vec[min])
			{
				int tmp=vec[i]-vec[min];
				//max=max>tmp?max:tmp;
				if(tmp>max)
				{
					max=tmp;
					sub.b=min;
					sub.e=i;
				}

			}
			else{
				min=i;
			}
		}
		return max;
	}

	int min_sub(vector<int> vec,int l,int r,sub& sub)
	{
		if(l>=r)
			return 0;

		int max=l;
		int min=0;

		for(int i=l+1;i<=r;i++)
		{
			if(vec[i]<vec[max])
			{
				int tmp=vec[i]-vec[max];
				//min=tmp<min?tmp:min;
				if(tmp<min)
				{
					min=tmp;
					sub.b=max;
					sub.e=i;
				}

			}
			else{
				max=i;
			}
		}
		return min;
	}

	int maxProfit(vector<int>& prices) {
		int len=prices.size();
		if(len==0)
			return 0;

		sub sub_all,sub_mid,sub_left,sub_right;
		int max_all=max_sub(prices,0,len-1,sub_all);

		int max_mid=-min_sub(prices,sub_all.b,sub_all.e,sub_mid);
		int max_left=max_sub(prices,0,sub_all.b-1,sub_left);
		int max_right=max_sub(prices,sub_all.e+1,len-1,sub_right);

		int max=0;
		max=max_mid>max_left?max_mid:max_left;
		max=max>max_right?max:max_right;

		return max+max_all;

	}
};


int main()
{
	Solution sol;
	vector<int> vec;
	int n,a;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		vec.push_back(a);
	}

	cout << sol.maxProfit(vec) <<endl;
	system("pause");
	return 0;

}