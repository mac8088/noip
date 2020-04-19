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
		if(s[i]=='A') printf("%c", 'T');
		if(s[i]=='T') printf("%c", 'A');
		if(s[i]=='G') printf("%c", 'C');
		if(s[i]=='C') printf("%c", 'G');
	}
	return 0;
}
