#include <vector>
#include <string>
#include <fstream>
#include <queue>
#include <iostream>
using namespace std;


bool isNext(string str1,string str2)
{
	int len1=str1.size();
	int len2=str2.size();
	if(len1!=len2)
		return false;

	int cnt=0;
	for(int i=0;i<len1;i++)
	{
		if(str1[i]!=str2[i])
			cnt++;
	}
	if(cnt==1)
		return true;

	return false;
}

int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
	if(beginWord==endWord)
		return 0;

	auto it=find(wordList.begin(),wordList.end(),endWord);
	if(it==wordList.end())
		return 0;
	auto it1=find(wordList.begin(),wordList.end(),beginWord);
	int start;
	if(it1==wordList.end())
	{
		wordList.push_back(beginWord);
		start=wordList.size()-1;
	}
	else
		start=it1-wordList.begin();


	int len=wordList.size();
	vector<vector<int>> graph(len,vector<int>(0));
	vector<bool> visited(len,false);

	for(int i=0;i<len-1;i++)
	{
		for(int j=i+1;j<len;j++)
		{
			if(isNext(wordList[i],wordList[j]))
			{
				graph[i].push_back(j);
				graph[j].push_back(i);
			}
		}
	}

	queue<int> que;
	que.push(start);
	visited[start]=true;
	//que.push(-1);
	int cnt=0;
	int pre=-1;
	int next=start;
	while(!que.empty())
	{
		int a=que.front();
		que.pop();
		//cnt++;

		for(int i=0;i<graph[a].size();i++)
		{
			int b=graph[a][i];
			if(!visited[b])
			{
				visited[b]=true;
				if(wordList[b]==endWord)
				{
					cnt++;
					return cnt;
				}
				que.push(b);
				next=b;
			}
		}

		if(a==pre)
		{
			pre=next;
			cnt++;
		}

		//que.push(-1);
	}

	return 0;
}


int main()
{
	string begin,end;
	vector<string> vec;
	ifstream in("input.txt");
	in>>begin;
	in>>end;
	int n;
	in>>n;
	for(int i=0;i<n;i++)
	{
		string a;
		in>>a;
		vec.push_back(a);
	}

	ladderLength(begin,end,vec);
	system("pause");
	return 0;
}