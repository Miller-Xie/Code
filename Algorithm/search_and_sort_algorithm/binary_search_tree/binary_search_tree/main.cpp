#include <iostream>

using namespace std;

class TreeNode
{
	TreeNode* left;
	TreeNode* right;
	int val;
	TreeNode(int i):val(i),left(nullptr),right(nullptr)
	{}
};

