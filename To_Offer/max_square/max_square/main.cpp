#include <vector>
#include <iostream>
#include <algorithm>
#include <fstream>

using namespace std;

bool is_ok(int x,int y,int d,const vector<vector<char>>& matrix)
{
	for(int i=x;i<x+d;i++)
	{
		if(matrix[i][y+d-1] == '0')
			return false;
	}

	for(int i=y;i<y+d;i++)
	{
		if(matrix[x+d-1][i] == '0')
			return false;
	}

	return true;
}

int maximalSquare(vector<vector<char>>& matrix) {
	if(matrix.empty()) return 0;

	const int row = matrix.size();
	const int col = matrix[0].size();
	int res = INT_MIN;

	const int dmax = min(col,row);
	vector<vector<vector<int>>> dp;
	dp.resize(row);
	for (int i=0;i<row;i++)
	{
		dp[i].resize(col);
	}

	for (int i=0;i<row;i++)
	{
		for (int j=0;j<col;j++)
		{
			dp[i][j].resize(dmax+1,0);
		}
	}

	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
		{
			dp[i][j][1] = matrix[i][j] == '1' ? 1 : 0;
			res = max(res,dp[i][j][1]);
		}


		for(int i=0;i<row;i++)
			for(int j=0;j<col;j++)
				for(int d=2;d <= dmax && i+d <= row && j+d <= col;d++)
				{
					if(dp[i][j][d-1] > 0 && is_ok(i,j,d,matrix))
					{
						dp[i][j][d] = d*d;
						res = max(res,dp[i][j][d]);
					}
				}

				return res;
}

int main()
{
	fstream fin("test.txt");
	int row,col;
	fin >> row >> col;
	vector<vector<char>> matrix(row,vector<char>(col,'0'));

	for (int i=0;i<row;i++)
	{
		for (int j=0;j<col;j++)
		{
			char ch;
			fin >> ch;
			matrix[i][j] = ch;
		}
	}

	cout << maximalSquare(matrix) << endl;

	system("pause");
	return 0;
}