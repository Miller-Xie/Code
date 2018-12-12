#include <string>
#include <iostream>
#include <algorithm>
#include <fstream>
#include <vector>
using namespace std;

int search(vector<int>& nums, int target) {
	if(nums.empty())
		return -1;

	int len = nums.size();
	if(target == nums[0])
		return 0;
	if(target == nums[len -1])
		return len-1;

	if(len == 1)
		return -1;

	if(target > nums[0] && target < nums[len-1])
	{
		int l=0,r=len-1;
		while(l <= r)
		{
			int m = l + (r - l)/2;
			if(nums[m] < target)
				l = m+1;
			else if(nums[m] > target)
				r = m-1;
			else
				return m;
		}

		return -1;
	}

	int min = -1;
	int l=0,r=len-1;
	while(l < r)
	{
		if(r - l == 1)
		{
			min = nums[l] < nums[r] ? l : r;
			break;
		}

		int m = l + (r - l)/2;

		if(nums[m] > nums[l] && nums[m] > nums[r])
			l = m;
		else 
			r = m;

	}


	if(target > nums[0] && target > nums[len-1])
	{
		l = 0;
		r = min-1;

	}
	else
	{
		l = min;
		r = len-1;
	}

	while(l <= r)
	{
		int m = l + (r - l)/2;
		if(target > nums[m])
			l = m+1;
		else if(target < nums[m])
			r = m-1;
		else
			return m;
	}


	return -1;

}

int main()
{
	//string str("Let's take LeetCode contest");
	fstream fin("test.txt");
	int target,n;
	vector<int> vec;
	//fin >> str;
	fin >> n;
	for(int i=0;i<n;i++)
	{

		int a;
		fin >> a;
		vec.push_back(a);
	}

	fin >> target;
	//string res = reverseWords(str);
	int res = search(vec,target);
	cout << res << endl;

	system("pause");
	return 0;

}