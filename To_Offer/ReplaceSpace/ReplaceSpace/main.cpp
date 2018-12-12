#include <iostream>
#include <string>
using namespace std;


void replaceSpace(char *str,int length) {
	if(length<=0 || !str)
		return;

	int cnt=0;
	int oldLength=0; 
	int i=0;
	while(str[i]!='\0')
	{
		oldLength++;
		if(str[i]==' ')
			cnt++;
		i++;
	}

	if(cnt==0)
		return;
	int newLength=oldLength+2*cnt;
	int index1=oldLength;
	int index2=newLength;
	while(index1>=0 && index2>=0)
	{
		if(str[index1]!=' ')
		{
			str[index2--]=str[index1--];
		}
		else{
			str[index2--]='0';
			str[index2--]='2';
			str[index2--]='%';
			index1--;
		}
	}
}


int main()
{
	char str[]="we are happy.";
	replaceSpace(str,14);
	system("pause");
	return 0;
}