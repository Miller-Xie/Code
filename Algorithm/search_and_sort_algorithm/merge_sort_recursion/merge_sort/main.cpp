#include <iostream>
#include <vector>

using namespace std;

void Merge(vector<int>& vec1,int b,int m,int e);
void MergeSort(vector<int>& vec,int l,int r)
{
	if(l < r)
	{
		int mid = (l + r) / 2;
		MergeSort(vec,l,mid);
		MergeSort(vec,mid + 1,r);

		Merge(vec,l,mid,r);
	}
}

void Merge(vector<int>& vec1,int b,int m,int e)
{
	int n1 = m - b + 1;
	int n2 = e - m;
	vector<int> vec_l(vec1.begin() + b,vec1.begin() + m + 1);
	vector<int> vec_r(vec1.begin() + m + 1,vec1.end());

	int i,j,a;
	for (i=0,j=0,a=b;i<n1 && j<n2;a++)
	{
		// <= 判断可以保证稳定性(vec_l[i]==vec[j]时先放进左边的数)
		if(vec_l[i] <= vec_r[j])
		{
			vec1[a] = vec_l[i++];
		}
		else
		{
			vec1[a] = vec_r[j++];
		}
	}
		for (;i<n1;i++)
		{
			vec1[a++] = vec_l[i];
		}
		for (;j<n2;j++)
		{
			vec1[a++] = vec_r[j];
		}
}


/***********测试主函数************/
int main()
{
	int n,tmp;
	vector<int> num;
	while (cin >> n)
	{
		for (int i=0;i<n;i++)
		{
			cin >> tmp;
			num.push_back(tmp);
		}

		int len = num.size();
		MergeSort(num,0,len-1);
		
		for (int i=0;i<len;i++)
		{
			cout << num[i] << " ";
		}

		cout << endl;
		num.clear();
	}
	
	return 0;
}

