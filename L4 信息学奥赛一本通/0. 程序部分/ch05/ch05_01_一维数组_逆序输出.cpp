#include<cstdio>
int a[100];
int main()
{
	int x, n = 0;
	while(scanf("%d", &x) == 1)
		a[n++] = x;
	
	for(int i=n-1; i>=1; --i)
		printf("%d", a[i]);
	printf("%d", a[0]);
	return 0;
}

//--------------------------------
//23
//43
//55
//33
//11
//78
//
//
//gg
//781133554323
//--------------------------------
