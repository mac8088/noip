#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long long s = 1;				//NOIP2010开始，C++语言允许是long long 
	int n;							//n不能定义为long long 否则for语句出现死循环 ??
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)		//若s定义为int，当n=13时，s的值就溢出了 
		s *= i;
	printf("%lld\n", s);			//低版本使用 %I64d 
	return 0;
}

//--------------------------------
//5
//120
//--------------------------------
