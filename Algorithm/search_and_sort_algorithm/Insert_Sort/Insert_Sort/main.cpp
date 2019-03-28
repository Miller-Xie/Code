#include <vector>
#include <iostream>
using namespace std;


void Insert_Sort(vector<int>& vec)
{
	int len = vec.size();
	for(int i=1;i<len;i++)
	{
		for(int j=i;j>=1 && vec[j] < vec[j-1];j--)
		{
			swap(vec[j],vec[j-1]);
		}
	}
}

/****²âÊÔÖ÷º¯Êý*****/
int main()
{
	vector<int> vec_in;
	int n,a;
	cin >> n;
	for (int i=0;i<n;i++)
	{
		cin >> a;
		vec_in.push_back(a);
	}

	Insert_Sort(vec_in);
	for (auto iter=vec_in.begin();iter!=vec_in.end();iter++)
	{
		cout << *iter << endl;
	}

	system("pause");
	return 0;
}