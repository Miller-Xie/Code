#include <string>
#include <vector>
#include <iostream>
#include <fstream>
#include <limits.h>
#include <algorithm>
using namespace std;


void Reverse(string& str,int l,int r)
{
	for(int i=l;i<=r;i++)
	{
		str[i] = ( str[i] == '0') ? '1' : '0';
	}
}

int get_cnt(const string& str)
{
	int cnt = 0;
	for (int i=1;i<str.size();i++)
	{
		if(str[i] != str[i-1]) cnt++;
	}

	return cnt+1;
}

int solution(string str)
{
	vector<string> vec;
	int len = str.size();
	string tmp("");

	if(len <= 1) return 0;
	if(len == 2) return 2;

	
	int res;

	/*res = max(res,get_cnt(str));

	for (int i=0;i<len;i++)
	{
		for (int j=i;j<len;j++)
		{
			string tmp(str);
			Reverse(tmp,i,j);
			//res = max(res,get_cnt(tmp));
			int cnt = get_cnt(tmp);
			if(res < cnt)
				res = cnt;
		}
	}

	return res;
	*/
	for(int i=0;i<len;i++)
	{
		//tmp.push_back(str[i]);
		tmp += str[i];

		if((i < len-1 && str[i] != str[i+1]) || (i == len-1))
		{
			vec.push_back(tmp);
			//tmp.clear();
			tmp = "";
		}
	}

	int cnt = 0;
	int len1 = vec.size();
	for (int i=0;i<len1;i++)
	{
		cnt += vec[i].size() - 1;
	}

	if(cnt == 1)
		res = len1+1;
	else if(cnt == 0)
		res = len1;
	else
		res = len1+2;


	return res;

}


int main()
{
	fstream fin("test.txt");
	int T;

	vector<string> vec;

	fin >> T;
	for(int i=0;i<T;i++)
	{
		string tmp;
		fin >> tmp;
		vec.push_back(tmp);
	}
	

	for(int i=0;i<T;i++)
	{
		cout << solution(vec[i]) << endl;
	}
	
	return 0;

}