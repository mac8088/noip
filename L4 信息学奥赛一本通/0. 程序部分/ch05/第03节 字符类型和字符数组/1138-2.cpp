#include <cstdio>
#include <cstring>
#include <iostream>
using namespace std;
char s[256];
int main()
{
	gets(s);  //gets read one entry line.
	int l = strlen(s);
	for(int i=0; i<l; i++)
		if(islower(s[i])) s[i] = toupper(s[i]);
	printf("%s", s);
	return 0;
}

