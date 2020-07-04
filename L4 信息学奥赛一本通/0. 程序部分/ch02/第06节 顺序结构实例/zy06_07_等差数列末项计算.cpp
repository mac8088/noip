#include<cstdio>
using namespace std;
int main()
{
	int a1, a2, n;
	scanf("%d%d%d", &a1,&a2,&n);
	n = a1 + (n-1) * (a2-a1);
	printf("%d\n", n);
	return 0; 
}

//--------------------------------
//等差数列通项公式：首项 + （项数 - 1） × 公差 
//1 4 100
//298
//--------------------------------
