#include<iostream>
#include<cstdio>
#include<math.h>
using namespace std;
int main()
{
	double xa,ya,xb,yb,n;
	scanf("%lf%lf%lf%lf",&xa,&ya,&xb,&yb);
	n=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
	printf("%.3lf",n);
	return 0;
}
