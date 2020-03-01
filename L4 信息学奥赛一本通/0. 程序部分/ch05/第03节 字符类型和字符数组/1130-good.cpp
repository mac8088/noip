#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char s[100000];
int c[26];
int main()
{	
	gets(s);  //read one string
	int l = strlen(s);
	for(int i=0; i<l; ++i)
		c[s[i] - 'a']++;  // using Barrel sorting
	for(int i=0; i<l; ++i)
		if(c[s[i] - 'a']==1)
		{
			printf("%c\n", s[i]);
			return 0;
		}
	printf("no\n");
	return 0;
}

//abcabd
//c
