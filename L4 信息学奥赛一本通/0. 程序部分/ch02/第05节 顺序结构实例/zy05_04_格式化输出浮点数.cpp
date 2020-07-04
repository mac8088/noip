#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	double d;
	scanf("%lf", &d);
//	printf("%f\n%.5f\n%e\n%g\n", d,d,d,d); 
	printf("%f\n", d); 
	printf("%.5f\n", d); 
	printf("%e\n", d); 
	printf("%g\n", d); 
	return 0; 
}

//--------------------------------
//12.3456789
//-----------------------
//12.345679
//12.34568
//1.234568e+001
//12.3457
////--------------------------------
