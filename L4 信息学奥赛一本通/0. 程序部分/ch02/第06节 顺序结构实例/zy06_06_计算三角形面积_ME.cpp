#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	double xa,ya,xb,yb,xc,yc,a,b,c,p,s;
	scanf("%lf%lf%lf%lf%lf%lf",&xa,&ya,&xb,&yb,&xc,&yc);
	c=sqrt((xa-xb)*(xa-xb) + (ya-yb)*(ya-yb));           //根据勾股定理 
	b=sqrt((xa-xc)*(xa-xc) + (ya-yc)*(ya-yc));
	a=sqrt((xc-xb)*(xc-xb) + (yc-yb)*(yc-yb));
	p = (a + b + c) / 2;
	s = sqrt(p * (p-a) * (p-b) * (p-c));				//根据海伦定理 
	printf("%.2f",s);
	return 0; 
}

//--------------------------------
//0 0 4 0 0 3
//6.00
//--------------------------------
