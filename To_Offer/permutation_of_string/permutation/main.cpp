/****************按照字典序输出字符串所有排列********************/
#include <bits/stdc++.h>

using namespace std;

vector<string> vec;

   //此处str形参不使用引用，直接拷贝，则不会影响上一层递归
	void solution(string str,int n,int size)
	{
		if(n==size)
		{
			vec.push_back(str);
			return;
		}
		sort(str.begin()+n,str.end());
		for(int i=n;i<size;i++)
		{
			//if(!visited[i])
			//{
			//visited[i] = true;
			if(i==n || str[i]!=str[n])
			{
				swap(str[i],str[n]);
				solution(str,n+1,size);
				swap(str[i],str[n]);

			}
			//visited[i] = false;
			//}
		}
	}

	vector<string> Permutation(string str) {
		const int len=str.size();
		if(0==len)
			return vec;
		string str1(len,0);
		//visited.resize(len);
		//fill(visited.begin(),visited.end(),false);
		solution(str,0,len);
		return vec;
	}

	int main()
	{
		string str;
		getline(cin,str,'\n');
		
	    Permutation(str);
		
		system("pause");
	}


	
	//vector<bool> visited;
