#include <iostream>
#include <cstdio>
using namespace std;
double MAX(double a, double b, double c)
{
	// use system max function
	return max(a, max(b, c)) * 1.0/(max(a+b, max(b, c)) * max(max(a, b), b+c));
}

int main()
{
	double a, b, c;
	cin >> a >> b >> c;
	printf("%.3lf", MAX(a,b,c));
	return 0;
}

