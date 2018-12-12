#include <bits/stdc++.h>
using namespace std;

class TreeNode {
public:
	     int val;
	     TreeNode *left;
	     TreeNode *right;
	     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
	 };

class Codec {
public:
	void ser(TreeNode* root,string& str)
	{
		if(!root)
		{
			//str.push_back("null");
			str+="null,";
			return;
		}

		stringstream stream;
		stream<<root->val;
		
		str+=stream.str();
		str+=',';

		ser(root->left,str);
		ser(root->right,str);
	}
	// Encodes a tree to a single string.
	string serialize(TreeNode* root) {
		string res;
		if(!root)
			return res;

		ser(root,res);
		return res;
	}

	void des(string& str,TreeNode*& root)
	{
		if(str.empty())
		{
			root=nullptr;
			return;
		}
		auto iter=str.begin();
		if(*iter=='n')
		{
			root=nullptr;
			while(*iter!=',')
				iter=str.erase(iter);

			str.erase(iter);
			return;
		}

		int num=0;
		while(iter!=str.end() && *iter!=',')
		{
			num+=10*num+((*iter)-'0');
			iter=str.erase(iter);
		}

		root=new TreeNode(num);
		if(iter==str.end())
			return;
		else
			str.erase(iter);

		des(str,root->left);
		des(str,root->right);

	}
	// Decodes your encoded data to tree.
	TreeNode* deserialize(string data) {
		if(data.empty())
			return nullptr;

		TreeNode* res=nullptr;
		des(data,res);
		return res;
	}
};


int main()
{
	string str_in;
	str_in="1,2,null,null,3,4,null,null,5";
	Codec sol;
	TreeNode* head=sol.deserialize(str_in);
	return 0;
}