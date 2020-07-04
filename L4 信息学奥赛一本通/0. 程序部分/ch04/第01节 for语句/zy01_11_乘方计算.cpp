#include<cstdio>
using namespace std;
int main()
{
	int a, n, s = 1;		//s存储乘方的结果，初始化为1 
	scanf("%d%d", &a, &n);  //代表a的n次方
	for(int i=1; i<=n; i++)	//循环累乘 
	{
		s*=a;				//s存储a的i次方 
	}
	printf("%d\n", s);
	return 0;
}

//--------------------------------
2 3
8
//--------------------------------
