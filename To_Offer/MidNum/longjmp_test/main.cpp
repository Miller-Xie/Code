#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Solution {
public:
	void Insert(int num)
	{
		if(min.empty())
			min.push_back(num);
		else{
			if(num>=min.front())
			{
				min.push_back(num);
				push_heap(min.begin(),min.end(),greater<int>());
			}
			else{
				max.push_back(num);
				push_heap(max.begin(),max.end());
			}

			int mis=min.size()-max.size();
			int len_min=min.size();
			int len_max=max.size();
			if( (int)(min.size()-max.size()) > 1 )
			{
				int tmp=min.front();
				pop_heap(min.begin(),min.end(),greater<int>());
				min.pop_back();

				max.push_back(tmp);
				push_heap(max.begin(),max.end());
			}
			else if( (int)(max.size()-min.size()) > 1 )
			{
				int tmp1=max.front();
				pop_heap(max.begin(),max.end());
				max.pop_back();

				min.push_back(tmp1);
				push_heap(min.begin(),min.end(),greater<int>());
			}
		}

	}

	double GetMedian()
	{ 
		if(min.empty() && max.empty())
			return 0;
		if(min.empty() && !max.empty())
			return max[0];
		if(!min.empty() && max.empty())
			return min[0];

		int sum=min.size()+max.size();
		double res=0;
		if((sum&1)==0)
			res=(double)(((double)max[0]+(double)min[0])/2);
		else
			res=min.size()>max.size()?(double)min[0]:(double)max[0];

		return res;

	}

private:
	vector<int> min;
	vector<int> max;

};



int main()
{
	Solution s;
	s.Insert(5);
	s.Insert(3);
	s.Insert(2);

	return 0;
	//cout<<
}


