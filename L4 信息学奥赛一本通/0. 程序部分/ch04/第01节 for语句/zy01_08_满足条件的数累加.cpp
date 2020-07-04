#include<cstdio>
using namespace std;
int main()
{
	long m, n, s = 0;					//s存储能被17整除的数之后，初始值为0 
	scanf("%ld%ld", &m, &n);
	for(int i=m; i<=n; i++)				//循环寻找m到n之间的所有能被17整除的数 
	{
		if(i%17==0) s+=i;				//如果是能被17整除就累加 
	}
	printf("%ld\n", s);
	return 0;
}

//--------------------------------
//50 85
//204
//--------------------------------
