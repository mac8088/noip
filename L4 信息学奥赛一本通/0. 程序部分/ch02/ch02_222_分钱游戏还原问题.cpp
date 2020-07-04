#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int a=8,b=8,c=8;
	a/=2;b/=2;c=a+b+c;
	a/=2;c/=2;b=a+b+c; 
	b/=2;c/=2;a=a+b+c; 
	printf("a=%-5db=%-5dc=%-5d\n",a,b,c);
	return 0; 
}

//--------------------------------
//a=13   b=7    c=4
//--------------------------------
