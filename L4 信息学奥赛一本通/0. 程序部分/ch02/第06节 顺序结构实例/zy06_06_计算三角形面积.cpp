#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	float xa,ya,xb,yb,xc,yc,a,b,c,p,s;
	scanf("%f%f%f%f%f%f",&xa,&ya,&xb,&yb,&xc,&yc);
	c=sqrt((xa-xb)*(xa-xb) + (ya-yb)*(ya-yb));           //���ݹ��ɶ��� 
	b=sqrt((xa-xc)*(xa-xc) + (ya-yc)*(ya-yc));
	a=sqrt((xc-xb)*(xc-xb) + (yc-yb)*(yc-yb));
	p = (a + b + c) / 2;								//a,b,c ��������ε������߳� 
	s = sqrt(p * (p-a) * (p-b) * (p-c));				//���ݺ��׶��� 
	printf("%.2f",s);
	return 0; 
}

//--------------------------------
//0 0 4 0 0 3
//6.00
//--------------------------------
