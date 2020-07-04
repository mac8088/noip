#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	float a, b, c;
	scanf("%f%f%f",&a,&b,&c);
	float p = (a+b+c)/2;
	float s = sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%0.3f\n",s);
	return 0; 
}

//--------------------------------
//3 4 5
//6.000
//--------------------------------
