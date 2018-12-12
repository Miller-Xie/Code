//最小和问题：循环方法时间复杂度是O(N^2),用归并方法简化时间复杂度到O(NlogN)
#include <iostream>
#include <vector>
using namespace std;

int Merge(vector<int>& vec,int l,int m,int r)
{
	vector<int> vec_cp(r-l+1,0);
	int i=l;
	int j=m+1;
	int cnt=0;
	int res=0;
	while (i<=m && j<=r)
	{
		if(vec[i]<vec[j])
		{
			res+=vec[i]*(r-j+1);
			vec_cp[cnt++]=vec[i++];
		}
		else{
			res+=0;
			vec_cp[cnt++]=vec[j++];
		}
		
	}
	while (i<=m)
	{
		vec_cp[cnt++]=vec[i++];
	}
	while(j<=r)
	{
		vec_cp[cnt++]=vec[j++];
	}
	copy(vec_cp.begin(),vec_cp.end(),vec.begin()+l);

	return res;
}

int Merge_Sort(vector<int>& vec,int l,int r)
{
	if(l >= r)
		return 0;
	int mid=l+(r-l)/2;
	int left_sum=Merge_Sort(vec,l,mid);
	int right_sum=Merge_Sort(vec,mid+1,r);
	int merge_sum=Merge(vec,l,mid,r);
	int res=left_sum+right_sum+merge_sum;
	return res;
}

int main()
{
	int n,a;
	vector<int> vc_in;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a;
		vc_in.push_back(a);
	}
	int min_sum=Merge_Sort(vc_in,0,vc_in.size()-1);
	cout << min_sum <<endl;
	system("pause");
	return 0;
}