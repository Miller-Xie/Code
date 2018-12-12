#include <bits/stdc++.h>

using namespace std;


int evalRPN(vector<string>& tokens) {
	stack<int> sta;
	int len = tokens.size();
	int idx = 0;
	//int res;
	while(idx < len)
	{
		auto tmp = tokens[idx];
		if(tmp == "+" || tmp == "-" || tmp == "*" || tmp == "/")
		{
			int num1,num2;
			if(!sta.empty())
			{
				num1 = sta.top();
				sta.pop();
			}
			else
				break;

			if(sta.empty())
			{
				num2 = sta.top();
				sta.pop();
			}
			else
				break;


			int res;
			if(tmp == "+")
			{
				res = num2 + num1;
			}
			else if(tmp == "-")
			{
				res = num2 - num1;
			}
			else if(tmp == "*")
			{
				res = num2 * num1;
			}
			else if(tmp == "/")
			{
				res = num2 / num1;
			}

			sta.push(res);
		}
		else
		{
			sta.push(stoi(tmp));
		}

		idx++;
	}

	if(sta.empty()) return 0;
	return sta.top();
}

int main()
{
	fstream fin("test.txt");
	int n;
	vector<string> vec;
	fin >> n;

	for (int i=0;i<n;i++)
	{
		string tmp;
		fin >> tmp;
		vec.push_back(tmp);
	}

	cout << evalRPN(vec) <<endl;
	system("pause");
	return 0;
}