#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
using namespace std;
string s;
int main()
{
	getline(cin, s);  //gets read one entry line.
	int l = s.size(); //return the size of string
	for(int i=0; i<l; i++)
	{
		if(s[i]=='A') printf("%c", 'T');
		if(s[i]=='T') printf("%c", 'A');
		if(s[i]=='G') printf("%c", 'C');
		if(s[i]=='C') printf("%c", 'G');
	}
	return 0;
}
