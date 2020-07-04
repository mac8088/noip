#include <cstdio>
#include <cmath>
int prime(int x);
int main()
{
	int n;
	scanf("%d", &n);
	if(prime(n))
		printf("%s\n", "yes");
	else
		printf("%s\n", "no");
	return 0; 
}

//分析：对于任意整数i，根据素数的定义：
//我们从2开始，到sqrt(i),找i的第一个约数，若找到第一个约数，则i必然不是素数。 
int prime(int x)
{
	int j;
	if(x==2) return 1;
	j = 2;
	while(j<=sqrt(x) && x%j!=0) 
		j++;
	if(x%j==0) return 0;
	else return 1;
}
