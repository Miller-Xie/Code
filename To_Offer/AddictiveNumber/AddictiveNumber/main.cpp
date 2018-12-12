#include <vector>
#include <string>
#include <iostream>
#include <limits>

using namespace std;

bool inValid(const string& str)
{
	if(str.size() == 1)
		return false;
	if(str.size() > 1)
	{
		if(str[0] == '0')
			return true;
	}

	return false;
}

long Stol(string str)
{
	long res = 0;
	for(int i=0;i<str.size();i++)
	{
		res = 10*res + (str[i] - '0'); 
	}

	return res;
}
bool recursion(int idx,string& num,vector<long>& res)
{
	int len = num.size();
	if(idx == len && res.size() >= 3) return true;

	//bool flag = false;
	//long tmp = 0;
	for(int i = idx;i < len && i - idx <= 8;i++)
	{
		//if(flag) break;
		string str = num.substr(idx,i-idx+1);
		if(inValid(str)) break;//01 02¡¢¡¢

		//if(tmp*10 > INT_MAX || ( tmp*10 + 7 == INT_MAX && num[i+1] > '7')) 
		// flag = true;

		long tmp = Stol(str);

		if(res.size() < 2) 
		{
			res.push_back(tmp);
			if(recursion(i+1,num,res))
				return true;
			res.pop_back();
		}
		else{
			int len1 = res.size();
			if(tmp == res[len1-1] + res[len1-2])
			{
				res.push_back(tmp);
				if(recursion(i+1,num,res))
					return true;
				res.pop_back();
			}
		}
	}

	return false;
}

bool isAdditiveNumber(string num) {
	if(num.size() < 3) return false;

	vector<long> res;
	return recursion(0,num,res);
}

int main()
{
	string str("121474836472147483648");
	isAdditiveNumber(str);

	system("pause");

	return 0;

}

