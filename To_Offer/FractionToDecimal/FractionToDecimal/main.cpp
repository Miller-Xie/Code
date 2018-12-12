#include <string>
#include <iostream>
#include <unordered_map>
#include <math.h>
#include <limits>
using namespace std;


/*
string fractionToDecimal(int numerator, int denominator) {
	if(denominator == 0) return "";

	if(numerator == 0) return "0";

	int neg = (numerator < 0) ^ (denominator < 0);
	long a = abs((long)numerator);
	long b = abs((long)denominator);
	string res;
	if(neg > 0)
	{
		res = "-";
	}

	res += to_string((long)a/b);
	if(a%b)
	{
		res += ".";
	}

	a = a%b;

	unordered_map<int,int> mp;
	while(a > 0 && mp.find(a) == mp.end())
	{
		mp[a] = res.size();
		a = a*10;
		long tmp = a/b;
		res += to_string((long)tmp);

		a = a%b;
	}

	if(a > 0)
	{
		int idx = mp[a];
		res = res.substr(0,idx) + "(" + res.substr(idx) + ")";
	}

	return res;
}*/


int main()
{
	int a = INT_MAX;
	int b = 1;

	//cout << fractionToDecimal(a,b) << endl;

	long long al = abs((long long)a);

	system("pause");
	return 0;
}