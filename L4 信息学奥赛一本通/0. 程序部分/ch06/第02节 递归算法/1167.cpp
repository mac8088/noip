#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;

float f(float x, float n)
{
	if(n==1) return x/(1+x);
	else return x/(n + f(x,n-1));
}

int main()
{
	int x, n;
	cin >> x >> n;
	printf("%.2f\n",f(x,n));
	return 0;
}