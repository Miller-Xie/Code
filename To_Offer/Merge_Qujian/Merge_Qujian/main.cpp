#include <bits/stdc++.h>
using namespace std;
/**
 * Definition for an interval.*/
 struct Interval {
      int start;
      int end;
      Interval() : start(0), end(0) {}
      Interval(int s, int e) : start(s), end(e) {}
  };
 
class Solution {
public:
    vector<Interval> recursion(int l,int r,vector<Interval>& vec)
    {
        if(l=r)
        {
            vector<Interval> res;
            res.push_back(vec[l]);
            return res;
        }
        
        //vector<Interval> res;
        int m=l+(r-l)/2;
        vector<Interval> left=recursion(l,m,vec);
        vector<Interval> right=recursion(m+1,r,vec);
        return merge_part(left,right);
    }
    
    vector<Interval> merge_part(vector<Interval>& left,vector<Interval>& right)
    {
        vector<Interval> res;
        int len1=left.size();
        int a=left[len1-1].end;
        int b=right[0].start;
        if(a<b)
        {
            //copy(left.begin(),left.end(),back_inserter(res));
            //copy(right.begin(),right.end(),back_inserter(res));
            for(int i=0;i<left.size();i++)
                res.push_back(left[i]);
            
            for(int i=0;i<right.size();i++)
                res.push_back(right[i]);
        }
        else
        {
            left[len1-1].end=right[0].end;
            //copy(left.begin(),left.end(),back_inserter(res));
            //copy(right.begin()+1,right.end(),back_inserter(res));
            for(int i=0;i<left.size();i++)
                res.push_back(left[i]);
            
            for(int i=1;i<right.size();i++)
                res.push_back(right[i]);
        }
        return res;
    }
    
    vector<Interval> merge(vector<Interval>& intervals) {
        int len=intervals.size();
        if(len==0)
            return intervals;
        
        return recursion(0,len-1,intervals);
    }
};


int main()
{
	Solution s;
	Interval a(1,3);
	vector<Interval> vec;
	vec.push_back(a);
	s.merge(vec);
	system("pause");
	return 0;

}