#include <string>
#include <iostream>
#include <vector>
using namespace std;


string getStr(string str)
{
	string res;
	int num=1;
	int i=0;
	int len=str.size();
	while(i<len)
	{
		if(i<len-1)
		{
			if(str[i]!=str[i+1])
			{
				res+=to_string((long long)num);
				res.push_back(str[i]);
				i++;
			}
			else
			{
				char s=str[i];
				i++;
				while(i<len && str[i]==s)
				{
					num++;
					i++;
				}

				res+=to_string((long long)num);
				res.push_back(s);
				num=1;
			}
		}
		else if(i==len-1)
		{
			res+=to_string((long long)num);
			res.push_back(str[i]);
			i++;
		}
	}

	return res;
}

string countAndSay(int n) {
	if(n==1)
		return string("1");

	if(n==2)
		return string("11");


	vector<string> strs;
	strs.push_back(string("1"));
	strs.push_back(string("11"));
	for(int i=2;i<n;i++)
	{
		strs.push_back(getStr(strs[i-1]));
	}

	return strs[n-1];
}


int main()
{
	cout<<countAndSay(5)<<endl;

	system("pause");
	return 0;
}