#include <vector>
#include <iostream>
using namespace std;

void Merge(vector<int>& vec1,vector<int>& vec2,int a,int m,int b)
{
	int i = a;
	int j = m+1;
	int cnt = a;
	for (;i <= m && j <= b;cnt++)
	{
		if(vec1[i] <= vec1[j])
		{
			vec2[cnt] = vec1[i++];
		}
		else{
			vec2[cnt] = vec1[j++];
		}
	}

	if(i <= m)
	{
		while (i <= m)
		{
			vec2[cnt++] = vec1[i++];
		}
	}

	if(j <= b)
	{
		while (j <= b)
		{
			vec2[cnt++] = vec1[j++];
		}
	}
}

void solution(vector<int>& vec1,vector<int>& vec2,int length,int N)
{
	if(length > N)
	{
		copy(vec1.begin(),vec1.end(),vec2.begin());
		return;
	}
	int i=0;
	for (;i < N - 2*length;i += 2*length)
	{
		Merge(vec1,vec2,i,i+length-1,i+2*length-1);
	}
	if(i + length < N)
	{
		Merge(vec1,vec2,i,i + length - 1,N - 1);
	}
	else{
		for (int j=i;j<N;j++)
		{
			vec2[j] = vec1[j];
		}
	}
}


void Merge_Sort(vector<int>& vec)
{
	vector<int> vec_cp(vec.size(),0);
	int length = 1;
	int N = vec.size();
	while (length < N)
	{
		solution(vec,vec_cp,length,N);
		length *= 2;
		solution(vec_cp,vec,length,N);
		length *= 2;
	}
}

/*********²âÊÔÖ÷º¯Êý***********/
int main()
{
	int a;
	int n;
	vector<int> vec_in;
	cin >> n;
	for (int i=0;i<n;i++)
	{
		cin >> a;
		vec_in.push_back(a);
	}

	Merge_Sort(vec_in);
	for (auto it=vec_in.begin();it!=vec_in.end();it++)
	{
		cout << *it << endl;
	}

	return 0;
}