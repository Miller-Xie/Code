#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <algorithm>
#include <unordered_map>
using namespace std;

class node
{
public:
	node()
	{
		//tail = false;
		for (int i = 0; i < 26; i++)
			arr[i] = nullptr;
	}

	node* arr[26];
	string s;

};

class Trie
{
public:
	node* root;

	Trie()
	{
		root = nullptr;
	}

	void insert(const string& word)
	{
		if (word.empty()) return;
		if (!root) root = new node;
		auto temp = root;
		for (int i = 0; i < word.size(); i++)
		{
			//temp = temp[]
			char ch = word[i];
			int idx = ch - 'a';
			if (!temp->arr[idx])
				temp->arr[idx] = new node;

			temp = temp->arr[idx];
		}

		temp->s = word;
	}

	bool inTrie(const string& word)
	{
		auto temp = root;
		if (!root) return false;

		for (auto ch : word)
		{
			int idx = ch - 'a';
			if (temp->arr[idx])
			{
				temp = temp->arr[idx];
			}
			else
				return false;
		}

		return true;
	}

};


class Solution {
public:
	vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
		//if (board.empty() || words.empty()) return vector<string>();

		vector<string> vec;
		//set<string> st;
		Trie* tree = new Trie;
		for (auto word : words)
		{
			tree->insert(word);
		}


		int row = board.size();
		int col = board[0].size();
		vector<vector<bool>> vis(row, vector<bool>(col, false));

		for (int i = 0; i < row; i++)
			for (int j = 0; j < col; j++)
			{
				//int idx = 0;
				recursion(i, j, board, tree->root, vis, vec);
			}

		sort(vec.begin(), vec.end());
		return vec;
	}

	void recursion(int i, int j, vector<vector<char>>& board, node* tree, vector<vector<bool>>& vis, vector<string>& vec)
	{
		int row = board.size();
		int col = board[0].size();
		//if(idx == word.size()) return;
		//if(!tree) return;
		if (i < 0 || i >= row || j < 0 || j >= col || vis[i][j] || !tree->arr[board[i][j] - 'a'])
			return;

		int idx = board[i][j] - 'a';
		tree = tree->arr[idx];

		if (!(tree->s.empty()))
		{
			vec.push_back(tree->s);
			tree->s.clear();
		}


		vis[i][j] = true;
		recursion(i - 1, j, board, tree, vis, vec);
		recursion(i + 1, j, board, tree, vis, vec);
		recursion(i, j - 1, board, tree, vis, vec);
		recursion(i, j + 1, board, tree, vis, vec);
		vis[i][j] = false;

		//return flag1 || flag2 || flag3 || flag4;
	}
};


int main()
{
	fstream fin("test.txt");
	int n;
	fin >> n;
	vector<string> words;
	while (n--)
	{
		string tmp;
		fin >> tmp;
		words.push_back(tmp);
	}


	int row, col;
	fin >> row >> col;
	vector<vector<char>> board(row,vector<char>(col,' '));
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			char ch;
			fin >> ch;
			board[i][j] = ch;
		}

	}

	unordered_map<int, int> mp;
	mp['xcg'] = 23;
	Solution s;
	s.findWords(board, words);

	system("pause");
	return 0;

}