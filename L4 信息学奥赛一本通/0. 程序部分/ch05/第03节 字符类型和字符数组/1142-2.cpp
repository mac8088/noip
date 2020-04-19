#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;
char s[1000];
int t=0;
int main()
{
	gets(s);
	int l = strlen(s);
	for(int i=0; i<l; ++i)
	{
		if(s[i]!=' ') t++;  // if not blank, the increase the length
		else
		{
			if(t>0) cout << t << ",";
			t = 0;
		}
	}
	cout << t << endl;  // output the latest t
	return 0;
}
