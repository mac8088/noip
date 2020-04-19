#include <cstdio>
#include <cstring>
#include <string>
#include <iostream>
using namespace std;
char a[256];
int main()
{
	gets(a);  //gets read one entry line.
	int l = strlen(a);
	for(int i=0; i<l; i++)
	{
		//logic 1: change as right move
		if(a[i]>='x' && a[i] <='z' || a[i]>='X' && a[i] <='Z') 
			a[i]=a[i]-23; //x-->a, y->b, z->c
		else a[i]=a[i]+3; //right move 3
		
		//logic 2: Case reversal
		if(a[i]>='A' && a[i] <='Z') a[i]=a[i]+32;
		else a[i]=a[i]-32;	
	}
	//logic 3: Reverse order output
	for(int i=l-1; i>=0; i--)	cout << a[i];		
	return 0;
}
