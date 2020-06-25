#include<cstdio>
using namespace std;
int a, b, t;
int main()
{	
	scanf("%d%d", &a, &b);
	int *p=&a;
	int *q=&b;
	t = *p; *p = *q; *q = t;
	printf("%d %d\n", a, b);
	return 0;
}