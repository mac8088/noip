#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
#define A 1
#define B 3
#define C 2
int main()
{
	int d = B * B - 4 * A * C;
	float x1, x2;
	x1 = (-B + sqrt(d)) / 2 * A;
	x2 = (-B - sqrt(d)) / 2 * A;
	printf("x1=%-8.3f x2=%-8.3f\n", x1, x2);
	return 0; 
}

//--------------------------------
//x1=-1.000   x2=-2.000
//--------------------------------
