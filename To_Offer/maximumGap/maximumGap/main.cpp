#include <iostream>
#include <vector>
#include <fstream>
#include <iterator>
using namespace std;

unsigned int getpos(int max,int min,int len,int num)
{
	double a=num-min;
	double b=max-min;
	
	return (unsigned int)(a*len/b);
}

int maximumGap(vector<int>& nums) {
	int len=nums.size();
	if(len<=1)
		return 0;

	vector<bool> flag(len+1,false);
	vector<int> maxs(len+1,INT_MIN);
	vector<int> mins(len+1,INT_MAX);
	int Max=INT_MIN;
	int Min=INT_MAX;

	for(int i=0;i<len;i++)
	{
		if(nums[i]<Min)
			Min=nums[i];
		if(nums[i]>Max)
			Max=nums[i];
	}

	if(Min==Max)
		return 0;

	flag[0]=true;
	flag[len]=true;

	mins[0]=Min;
	mins[len]=Max;
	maxs[0]=Min;
	maxs[len]=Max;

	for(int i=0;i<len;i++)
	{
		unsigned int pos=getpos(Max,Min,len,nums[i]);
		mins[pos]=min(mins[pos],nums[i]);
		maxs[pos]=max(maxs[pos],nums[i]);
		flag[pos]=true;
	}

	int res=INT_MIN;
	bool flag1=false;
	int lastMax=mins[0];
	for(int i=1;i<=len;i++)
	{
		if(flag[i])
		{
			res=max(res,mins[i]-lastMax);
			lastMax=maxs[i];
		}
	}

	return res;
}

int main()
{
	int arr[]={1,3,100};
	string in_file("data.txt");
	vector<int> vec(arr,arr+3);

	cout << maximumGap(vec) <<endl;
	system("pause");

	return 0;

}