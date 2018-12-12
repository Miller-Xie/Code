#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

vector<long long> bitNum(long long num,vector<long long> vec)
{
	vector<long long> bit;
	vector<long long> bitNum;
	for(long long i=0;i<num;++i)
	{
		long long count = 0;
		long long vecNum = vec[i];
		while(vecNum)
		{
			++count;
			vecNum/=10;
		}
		bit.push_back(count);
	}
	for(long long i=0;i<num;++i)
	{
		long long n = bit[i];
		long long bitSum = 0;
		while(n)
		{
			if(n == 1)
				bitSum += vec[i];
			else
			{
				bitSum += (vec[i] - (long long)pow((double)10,(long)n-1)+1)*n;
				vec[i] = (long long)pow((double)10,(long)n-1)-1;
			}
			n--;
		}
		bitNum.push_back(bitSum);
	}
	return bitNum;
}

int main()
{
	vector<long long> numArray;
	long long num = 0;
	cin>>num;
	for(long long i=0;i<num;++i)
	{
		long long n;
		cin>>n;
		numArray.push_back(n);
	}
	vector<long long> vec = bitNum(num,numArray);
	for(long long i=0;i<num;++i)
		cout<<vec[i]<<endl;
	system("pause");
}
