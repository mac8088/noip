#include<cstdio>
using namespace std;
int main()
{
	int n, s = 0;				//s存储满足条件的最少苹果的个数，初始值为0 
	scanf("%d", &n);
	for(int i=1;i<=n;i++)		//循环计算机满足条件的最少苹果个数 
		s+=i;
	printf("%d\n",s);
	return 0;
}

//--------------------------------
//8
//36
//--------------------------------
