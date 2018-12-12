#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

 pair<int,int> partition(vector<int>& vec,int l,int r)
    {
        //int mid=l+(r-l)/2;
        
        /*default_random_engine e;
        uniform_int_distribution<unsigned> u(l,r);
        int pivot=vec[u(e)];*/
        int m = l + (r -l)/2;
        if(vec[l] > vec[r])
            swap(vec[l],vec[r]);
        if(vec[l] > vec[m])
            swap(vec[l],vec[m]);
        if(vec[m] > vec[r])
            swap(vec[m],vec[r]);
        
        swap(vec[r],vec[m]);
        int pivot=vec[r];
        int len=vec.size();
        int more=l-1;
        int cur=l;
        int less=r;
       
        while(cur<less)
        {
            if(vec[cur] > pivot)
            {
                swap(vec[++more],vec[cur++]);
            }
            else if(vec[cur] < pivot)
            {
                swap(vec[--less],vec[cur]);
            }
            else
                cur++;
        }
        
        swap(vec[r],vec[less]);
        
        return make_pair(more+1,less);
    }
    
    int findKthLargest(vector<int>& nums, int k) {
        //快排partition实现
        int len=nums.size();
        //vector<int> output;
        if(k<=0 || len==0 || len<k)
            return 0;
        //int index=len-k;
        //sort(nums.begin(),nums.end(),greater<int>());
        
       pair<int,int> pr = partition(nums,0,len-1);
        
	   int start = 0;
	   int end = len - 1;
        while(k-1 < pr.first || k-1 > pr.second)
        {
            if(k-1 < pr.first)
			{
				end = pr.first - 1;
                pr = partition(nums,start,end);
			}
            else if(k-1 > pr.second)
			{
				start = pr.second + 1;
                pr = partition(nums,start,end);
			}
        }
        
        return nums[k-1];
        
        //红黑树实现
        /*multiset<int,less<int>> st(nums.begin(),nums.begin()+k,less<int>());
        
        for(auto it=nums.begin()+k;it!=nums.end();it++)
        {
            auto iter = st.begin();
            if(*iter < *it)
            {
                st.erase(iter);
                st.insert(*it);
            }
        }
        
        return *(st.begin());*/
    }

int main()
{
	fstream input("test.txt");
	vector<int> vec_in;
	int n,a,k;
	input >> n;
	input >> k;
	for (int i=0;i<n;i++)
	{
		input >> a;
		vec_in.push_back(a);
	}
	//int k=vec_in.size()/3;
	int res = findKthLargest(vec_in,k);
	
	cout << res <<endl;
	
	system("pause");
	return 0;
}