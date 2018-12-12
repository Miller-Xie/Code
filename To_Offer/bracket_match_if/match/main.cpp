/*******¿®∫≈ «∑Ò∆•≈‰*********/
#include <bits/stdc++.h>

using namespace std;

int main()
{
	string str;
	stack<char> sta;
	while(getline(cin,str,'\n'))
	{
		for(int i=0;i<str.size();i++)
		{
			if(str[i]=='('||str[i]=='['||str[i]=='{')
				sta.push(str[i]);
			if(str[i]==')')
			{
				if (sta.empty() || sta.top() != '(')
				{
					cout << "not match" << endl;
				}
				sta.pop();
			}

			if(str[i]==']')
			{
				if (sta.empty() || sta.top() != '[')
				{
					cout << "not match" << endl;
				}
				sta.pop();
			}

			if(str[i]=='}')
			{
				if (sta.empty() || sta.top() != '{')
				{
					cout << "not match" << endl;
				}
				sta.pop();
			}
		}
		if(sta.empty())
			cout <<"match"<<endl;
		else
			cout << "not match" <<endl;
	}
}