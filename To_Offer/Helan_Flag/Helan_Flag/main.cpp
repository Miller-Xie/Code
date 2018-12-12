//荷兰国旗问题，<pivot在左边，==pivot在中间，>pivot在右边
//快速排序中，partition功能：<=pivota放左边，>pivot放右边
#include <iostream>
#include <vector>
using namespace std;


void partition(vector<int >& vec,int pivot)
{
	int len=vec.size();
	int less=-1;
	int more=len;
	int cur=0;
	while(cur<more)
	{
		if(vec[cur]<pivot)
		{
			swap(vec[cur++],vec[++less]);
		}
		else if(vec[cur]>pivot)
		{
			swap(vec[cur],vec[--more]);//和大于区域交换cur不前进
		}
		else
			cur++;
	}
}

int main()
{
	vector<int> vc_in;
	int a,n,p;
	cin>>n;

	for (int i=0;i<n;i++)
	{
		cin>>a;
		vc_in.push_back(a);
	}
	cin>>p;
	partition(vc_in,p);
	for (auto it=vc_in.begin();it!=vc_in.end();it++)
	{
		cout<<*it<<endl;
	}
	system("pause");
	return 0;
}