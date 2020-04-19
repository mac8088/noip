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
		if(s[i]>='a' && s[i] <='z') s[i]=s[i]-32;
		cout << s[i];
	}
	return 0;
}
