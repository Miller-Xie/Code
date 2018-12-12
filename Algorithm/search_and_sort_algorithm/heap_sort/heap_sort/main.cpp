#include <bits/stdc++.h>

using namespace std;

//堆排序函数
void HeapSort(vector<int>& vc,int a,int b)
{
	//int temp=vc[a];
	//int j=2*a+1;
	for(int j=a*2+1;j<=b;j=j*2+1)
	{
		//j对应左孩子，同时应该检查右孩子（j+1<=b）防止越界
		if(j+1<=b && vc[j]<vc[j+1])
			j++;

		if(vc[a]<vc[j])
		{
			swap(vc[a],vc[j]);
			a=j;
		}
		else
			break;
	}
}

int main()
{
	int n;
	vector<int> vec;
	while(cin>>n)
	{
		for(int i=0;i<n;i++)
		{
			int a;
			cin>>a;
			vec.push_back(a);
		}

		int len=vec.size();
		for(int i=len/2-1;i>=0;i--)
		{
			HeapSort(vec,i,len-1);
		}

		for (int i=len-1;i>0;i--)
		{
			swap(vec[0],vec[i]);
			HeapSort(vec,0,i-1);
		}

		for(int i=0;i<len;i++)
		{
			cout<<vec[i]<<' ';
		}
		system("pause");
	}
	return 0;

}