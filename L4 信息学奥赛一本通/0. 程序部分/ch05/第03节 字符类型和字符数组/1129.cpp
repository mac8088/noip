#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char st[200];
int main()
{	
	char ch[256];
	int num =0;
	gets(ch);  //gets, read one string from io
	int l = strlen(ch);  //the length of string
	for(int i=0; i<l; i++)
	{
		if(ch[i]>='0' && ch[i] <='9') num++;
	}
	cout << num << endl;
	return 0;
}
