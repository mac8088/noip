#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
	for(int x=1; ; ++x)			//可以直接从x=32 开始枚举 
	{
		int n = x*x;
		if(n<1000) continue;
		if(n>9999) break;
		int hi = n /100, lo = n%100;
		if(hi/10==hi%10 && lo/10==lo%10)
			printf("%d\n", n);
	}
			
	return 0;
}

//--------------------------------
//7744 = 88 * 88
//--------------------------------
