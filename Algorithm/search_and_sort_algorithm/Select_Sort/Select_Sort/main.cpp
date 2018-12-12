#include <iostream>
#include <vector>
using namespace std;

void Select_Sort(vector<int>& vec)
{
	int len=vec.size();
	for (int i=0;i<len-1;i++)
	{
		int min=i;
		for(int j=i+1;j<len;j++)
		{
			if(vec[j]<vec[min])
				min=j;
		}
		swap(vec[min],vec[i]);
	}
}

int main()
{
	vector<int> vec_in;
	vec_in.push_back(4);
	vec_in.push_back(5);
	vec_in.push_back(10);
	vec_in.push_back(20);
	vec_in.push_back(37);
	vec_in.push_back(0);
	Select_Sort(vec_in);
	system("pause");
	return 0;
}