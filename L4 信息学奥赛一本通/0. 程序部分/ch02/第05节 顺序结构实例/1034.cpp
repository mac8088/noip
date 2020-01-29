#include<iostream>
#include<cstdio>
#include<cmath>
#include<math.h>
using namespace std;
int main()
{
	double xa,ya,xb,yb,xc,yc,n,a,b,c,r,s;
	scanf("%lf%lf%lf%lf%lf%lf",&xa,&ya,&xb,&yb,&xc,&yc);
	a=sqrt((xa-xb)*(xa-xb)+(ya-yb)*(ya-yb));
	b=sqrt((xb-xc)*(xb-xc)+(yb-yc)*(yb-yc));
	c=sqrt((xc-xa)*(xc-xa)+(yc-ya)*(yc-ya));
	r=(a+b+c)/2;
	s=sqrt(r*(r-a)*(r-b)*(r-c));
	printf("%.2lf",s);
	return 0;
}
