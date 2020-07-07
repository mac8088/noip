#include <iostream>
#include <cstdio>
using namespace std;

double hermite(int n, int x)
{
	if(n==0) return 1;
	if(n==1) return 2*x;
	return 2*x * hermite(n-1, x) - 2*(n-1) * hermite(n-2, x);
}

int main()
{
	int n, k;
	cin >> n >> k;
	double c = hermite(n,k);
	printf("%.2lf\n",c);
	return 0;
}