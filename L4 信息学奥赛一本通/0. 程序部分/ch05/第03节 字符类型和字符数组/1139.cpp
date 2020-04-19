#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
using namespace std;
char str[25];
int main()
{
	int n;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> str;
		if(str[0]>='a' && str[0]<='z')
			str[0]-=32;  //keep the first letter as upper case
		for(int j=1; j<strlen(str); j++)
			if(str[j]>='A' && str[j]<='Z') str[j]+=32;
		puts(str);
	}
	return 0;
}
