#include<cstdio>
using namespace std;
int main()
{
	int n;
	scanf("%d", &n);
	double a = 1, b = 1, c, s = 0;
	for(int i=1; i<=n; i++)
	{
		c = a + b;
		a = b;
		b = c;
		s = s + (double)b/a;
	}
	printf("%.4lf\n", s);
	return 0;
}

//--------------------------------
//2
//3.5000
//--------------------------------
