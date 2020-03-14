#include <cstdio>
using namespace std;
int fac(int x);
int main()
{
	int m,n;
	scanf("%d%d", &m, &n);
	printf("%d", fac(m)/(fac(m-n)*fac(n)));
	return 0;
}

int fac(int n)
{
	int s =1;
	for(int i=1; i<=n; ++i)
		s*=i;
	return s;
}
