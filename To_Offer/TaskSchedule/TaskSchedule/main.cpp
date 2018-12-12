#include <string>
#include <iostream>
#include <map>
#include <math.h>
#include <algorithm>
using namespace std;



int leastInterval(string &tasks, int n) {
	// write your code here
	map<char,int> mp;
	for(int i=0;i<tasks.size();i++)
		mp[tasks[i]]++;

	auto iter = mp.rbegin();
	int Max = iter->second;
	int cnt = 0;
	for(auto it = mp.rbegin();it != mp.rend() && it->second == Max;it++)
	{
		cnt++;
	}

	int res = (Max - 1)*(n + 1) + cnt;
	int len = tasks.size();
	return max(len,res);
}


int main()
{
	string str("BFJJCHICEGCEJFGJBIBBCBGAJHCGDEHEHAHIAJCGBGHGH");
	int n = 15;
	cout << leastInterval(str,n) << endl;

	return 0;
}