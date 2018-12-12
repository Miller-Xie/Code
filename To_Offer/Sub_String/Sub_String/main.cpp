#include <iostream>
#include <vector>
#include <string>
#include <iterator>
using namespace std;

void PrintSub(string str,string res,int index,vector<string>& vec)
{
	if(index==str.size())
	{
		//cout<<res<<endl;
		if(res.size()!=0)
			vec.push_back(res);
		return;
	}
	PrintSub(str,res+str[index],index+1,vec);
	PrintSub(str,res,index+1,vec);
}


int main()
{
	string str;
	cin>>str;
	vector<string> res;
	PrintSub(str,"",0,res);
	ostream_iterator<string> out_it(cout," ");
	copy(res.begin(),res.end(),out_it);
	system("pause");
	return 0;
}