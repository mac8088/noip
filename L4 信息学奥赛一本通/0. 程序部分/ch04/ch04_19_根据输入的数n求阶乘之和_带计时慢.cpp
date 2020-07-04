#include<iostream>
#include<ctime>
using namespace std;
int main()
{
	const int MOD = 1000000;
	int n, s = 0;
	scanf("%d", &n);
	for(int i=1;i<=n;i++)
	{
		int factorial = 1;
		for(int j=1; j<=i; ++j)
			factorial = (factorial * j % MOD);
		s = (s + factorial)%MOD;
	}
	printf("%d\n", s);
	printf("Time used=%.2lf\n", (double)clock()/CLOCKS_PER_SEC);
	return 0;
}

//--------------------------------
//10
//37913
//--------------------------------
