#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	scanf("%d%d%d", &a,&b,&c);
	if(a>=b && a>=c) printf("%d", a); 
	else if(b>=a && b>=c) printf("%d", b); 
	else printf("%d", c); 
	return 0; 
}

//--------------------------------
//	int max = a;
//	if(max<b) max=b;
//	if(max<c) max=c;
//	printf("%d", max); 
//描述
//输入三个整数,输出最大的数。
//
//输入
//输入为一行，包含三个整数，数与数之间以一个空格分开。
//输出
//输出一行，包含一个整数，即最大的整数。
//样例输入
//10 20 56
//样例输出
//56
//--------------------------------
