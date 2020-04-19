#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
using namespace std;
char s[256];
int main()
{
	gets(s);  //gets read one entry line.
	int l = strlen(s);
	for(int i=0; i<l; i++)
	{
		if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z')) 
		{
			if(s[i]=='z' || s[i]=='Z')
			{
				if(s[i]=='z') printf("%c", 'a');
				if(s[i]=='Z') printf("%c", 'A');
			}else{
				printf("%c", s[i]+1);
			}
		}
		else
		{
			printf("%c", s[i]);  //output as old style 
		}
	}
	return 0;
}
