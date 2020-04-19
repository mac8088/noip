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
		if(s[i]=='z' || s[i]=='Z')  // turn z or Z as a or A
			s[i] = s[i]-25;
		else if((s[i]>='a' && s[i]<='y') || (s[i]>='A' && s[i]<='Y')) 
			s[i] = s[i]+1;
		cout << s[i];
	}
	return 0;
}
