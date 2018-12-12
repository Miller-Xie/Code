#include <bits/stdc++.h>
using namespace std;


int minNumEach(vector<int> vec)
{
	for(int i=0;i<vec.size()-1;i++)
	{
		if(vec[i]>vec[i+1])
			return vec[i+1];
	}
	return vec[0];
}

int minNumberInRotateArray(vector<int> rotateArray) {
	if(rotateArray.empty())
		return 0;

	int l=0;
	int r=rotateArray.size()-1;
	int res=l;
	while(rotateArray[l]>=rotateArray[r])
	{
		if(r-l==1)
		{
			res=r;
			break;
		}
		int m=(r-l)/2+l;
		if(rotateArray[m]==rotateArray[l] && rotateArray[m]==rotateArray[r])
			return minNumEach(rotateArray);

		if(rotateArray[m]>=rotateArray[l])
			l=m;
		else if(rotateArray[m]<=rotateArray[r])
			r=m;
	}

	return rotateArray[res];
}


int main()
{
	istream_iterator<int> in(cin),eof;
	vector<int> vec;
	copy(in,eof,back_inserter(vec));

	cout<<minNumberInRotateArray(vec);
	cout<<endl;

	system("pause");
	return 0;

}