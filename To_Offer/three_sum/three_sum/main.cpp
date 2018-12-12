#include <iostream>
#include <vector>
#include <fstream>
#include <algorithm>
using namespace std;


vector<vector<int>> threeSum(vector<int>& nums) {
	int len = nums.size();
	if(len < 3)
		return vector<vector<int>>();

	sort(nums.begin(),nums.end());
	vector<vector<int>> res;
	for(int i=0;i<len-2;i++)
	{
		if(i == 0 || (i > 0 && nums[i] != nums[i-1]))
		{
			int l = i+1;
			int r = len-1;
			int target = 0 - nums[i];
			while(l < r)
			{
				int tmp = nums[l] + nums[r];
				if(target > tmp)
				{
					l++;
				}
				else if(target < tmp)
				{
					r--;
				}
				else{
					vector<int> vec;
					vec.push_back(nums[i]);
					vec.push_back(nums[l]);
					vec.push_back(nums[r]);
					res.push_back(vec);

					l++;
					r--;
					while(l < r && nums[l] == nums[l-1])
						l++;
					while(l < r && nums[r] == nums[r+1])
						r--;
				}
			}

		}
	}

	return res;
}


int main()
{
	fstream fin("test.txt");
	int n;
	fin >> n;
	vector<int> nums;
	for (int i=0;i<n;i++)
	{
		int a;
		fin >> a;
		nums.push_back(a);
	}

	vector<vector<int>> res = threeSum(nums);
	system("pause");
	return 0;
}