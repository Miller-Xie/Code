#include "bits/stdc++.h"
using namespace std;

bool match(char* str, char* pattern)
{
	int len1=strlen(str);
	int len2=strlen(pattern);
	bool result;
	if(*str=='\0' && *pattern=='\0')
		result= true;
	else if(*str!='\0' && *pattern=='\0')
		result= false;
	else{
		char* bac=pattern+1;
		if(*bac!='*')
		{
			if(*str!='\0' && (*str==*pattern || *pattern=='.'))
				result= match(str+1,pattern+1);
			else{
				result= false;
			}
		}
		else{
			if(*str!=*pattern && *pattern!='.')
			{
				result= match(str,pattern+2);
			}
			else if(*str!='\0')
			{
				result= match(str+1,pattern) || match(str,pattern+2);
			}
			/*if (*str == *pattern || (*str != '\0' && *pattern == '.'))
			                return match(str, pattern+2) || match(str+1, pattern);
							            else
										                return match(str, pattern+2);*/
		}
	}

	//return result;
}


int main()
{
	char str1[50];
	char str2[50];
	gets(str1);
	gets(str2);

	match(str1,str2);
	return 0;
}