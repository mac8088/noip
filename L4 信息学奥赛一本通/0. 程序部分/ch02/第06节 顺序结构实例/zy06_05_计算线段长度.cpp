#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	double xa,ya,xb,yb,n;
	scanf("%lf%lf%lf%lf",&xa,&ya,&xb,&yb);
	n=sqrt((xa-xb)*(xa-xb) + (ya-yb)*(ya-yb));			//根据勾股定理 
	printf("%.3lf",n);
	return 0; 
}

//--------------------------------
//1 1
//2 2
//1.414
//--------------------------------
