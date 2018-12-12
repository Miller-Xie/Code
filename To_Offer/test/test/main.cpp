#include <iostream>
#include <string>
#include <map>
using namespace std;



bool isPalindrome(string s) {
	int len=s.size();
	if(len==0)
		return true;

	
	//string s1;
	int index=0;
	for(int i=0;i<len;i++)
	{
		if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') ||(s[i]>='0' & s[i]<='9'))
			s[index++]=s[i];
	}

	while(s.size()>index)
		s.pop_back();


	int l=0;
	int r=s.size()-1;
	while(l<r)
	{
		int inc=abs(s[l]-s[r]);
		if(s[l]!=s[r] && inc!=32)
			return false;
		l++;
		r--;
	}
	return true;

}


int main()
{
	//string str("0P");

	map<string,int> mp;
	mp.insert(make_pair("xcg",1995));
	auto it=mp.erase(mp.begin());
	if(it==mp.end())
		cout<<"removed"<<endl;
	string str="0P"; 
	if(isPalindrome(str))
		cout<<"OK"<<endl;


	return 0;
}