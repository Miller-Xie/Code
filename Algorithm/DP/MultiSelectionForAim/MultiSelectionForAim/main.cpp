#include <vector>
#include <iostream>
using namespace std;


bool isOK(vector<int> vec,int index,int sum)
{
	if(sum==0)
		return true;
	if(sum<0)
		return false;
	if(index==vec.size())
	{
		if(sum==0)
			return true;
		else 
			return false;
	}
    
	return isOK(vec,index+1,sum-vec[index]) || isOK(vec,index+1,sum);
}

int main()
{
	int n;
	vector<int> in;
	int aim;
	cin>>aim;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		int a;
		cin>>a;
		in.push_back(a);
	}

	if(isOK(in,0,aim))
		cout << "is OK!" <<endl;

	else
		cout << "is not OK!"<<endl;

	system("pause");
	return 0;

}