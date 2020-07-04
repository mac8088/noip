#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	char c; int i; float f; double d;
	scanf("%c%d%f%lf",&c,&i,&f,&d);
	printf("%c %d %.6f %.6lf", c,i,f,d);
	return 0; 
}

//--------------------------------
//a
//12
//2.3
//3.2
//a 12 2.300000 3.200000
//--------------------------------
