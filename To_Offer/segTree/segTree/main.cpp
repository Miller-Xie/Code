#include <iostream>
#include <vector>
#include <fstream>
#include <limits.h>
using namespace std;


class segTree
{
public:
	segTree(int l,int r,int n)
	{
		start=l;
		end=r;
		mp.resize(n,0);
		left=right=nullptr;
	}

	int start,end;
	vector<int> mp;
	segTree* left;
	segTree* right;
};

segTree* build(int l,int r,vector<int>& vec,int Max,int Min)
{
	//if(l > r)
	//return nullptr;
	int mp_size = Max - Min +1;
	if(l == r)
	{
		segTree* tmp = new segTree(l,r,mp_size);
		tmp->mp[vec[l] - Min] = 1;
		return tmp;
	}

	segTree* res=new segTree(l,r,mp_size);
	int m=l+(r-l)/2;
	res->left = build(l,m,vec,Max,Min);
	res->right = build(m+1,r,vec,Max,Min);

	for(int i=0;i<mp_size;i++)
		{
			res->mp[i] = res->left->mp[i] + res->right->mp[i];
	    }
	return res;
}


vector<int> getMap(int l,int r,segTree* root,int mp_size)
{
	if(l == root->start && r == root->end)
		return root->mp;

	//int m = l + (r-l)/2;
	int m = root->start + (root->end - root->start)/2;
	vector<int> mp_l(mp_size,0);
	vector<int> mp_r(mp_size,0);
	if(l <= m)
	{
		if(r<=m)
			mp_l = getMap(l,r,root->left,mp_size);
		else
			mp_l = getMap(l,m,root->left,mp_size);
	}

	if(r > m)
	{
		if(l > m)
			mp_r = getMap(l,r,root->right,mp_size);
		else
			mp_r = getMap(m+1,r,root->right,mp_size);
	}

	vector<int> res(mp_size,0);
	for(int i=0;i<mp_size;i++)
	{
		res[i] = mp_l[i] + mp_r[i];
	}

	return res;
}

bool find_if_bigT(const vector<int>& vec,int t)
{
	for (int i=0;i<vec.size();i++)
	{
		if(vec[i] >= t)
			return true;
	}

	return false;
}


int main()
{
	fstream in("test.txt");
	int n,k,t;
	in >> n;
	in >> k;
	in >> t;
	vector<int> vec;
	for(int i=0;i<n;i++)
	{
		int a;
		in >> a;
		vec.push_back(a);
	}

	
	int len = vec.size();
	int Min = INT_MAX;
	int Max = INT_MIN;
	for (int i=0;i<len;i++)
	{
		Min = min(Min,vec[i]);
		Max = max(Max,vec[i]);
	}

	int mp_size = Max - Min +1;

	segTree* head = build(0,len-1,vec,Max,Min);

	int cnt = 0;
	vector<int> tmp(mp_size,0);
	for(int i=0;(i+k-1)<len;i++)
	{
		tmp = getMap(i,i+k-1,head,mp_size);
		if(find_if_bigT(tmp,t))
		{
			cnt++;
		}

		tmp.clear();
	}

	cout << cnt << endl;

	system("pause");

	return 0;
}