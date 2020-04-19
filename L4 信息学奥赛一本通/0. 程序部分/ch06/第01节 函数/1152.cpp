#include <iostream>
#include <cstdio>
using namespace std;
int mymax(int a, int b, int c)
{
	int max = a;
	if(max<b) max = b;
	if(max<c) max = c;
	return max;
}

int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	double m = mymax(a, b, c) * 1.0/(mymax(a+b, b, c) * mymax(a, b, b+c));
	printf("%.3lf", m);
	return 0;
}

