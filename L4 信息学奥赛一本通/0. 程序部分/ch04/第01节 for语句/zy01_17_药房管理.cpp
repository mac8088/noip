#include<cstdio>
using namespace std;
int main()
{
	int m, n, x, k = 0;
	scanf("%d", &m);		//每天开始时的药品总量m 
	scanf("%d", &n);		//这一天的取药人数n 
	for(int i=1; i<=n; i++)	//循环判断每个病人取药的情况 
	{
		scanf("%d", &x);
		if(m>=x) m-=x;		//判断第i个人能否取上药？  
		else ++k;
	}
	printf("%d", k);		//k存储这一天没有取上药品的人数 
	return 0;
}

//--------------------------------
//当要取的药小于或者等于库存余量的时候，可以取药；
//有会出现取少量的药可以成功，但是多量的无法成功！ 
//30
//6
//10 5
//20 6
//7 8
//2
//--------------------------------
