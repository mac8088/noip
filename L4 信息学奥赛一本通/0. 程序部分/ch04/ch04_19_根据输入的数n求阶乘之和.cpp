#include<cstdio>
using namespace std;
int main()
{
	int n, s = 0;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		int factorial = 1;
		for(int j=1; j<=i; ++j)
			factorial *= j;
		s+= factorial;
	}
	printf("%d\n", s%1000000);
	return 0;
}

//--------------------------------
//10
//37913
//--------------------------------
