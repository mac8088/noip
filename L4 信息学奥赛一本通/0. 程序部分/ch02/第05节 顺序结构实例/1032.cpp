#include<cstdio>
using namespace std;
int main()
{
	int h,r,a,b;
	scanf("%d%d",&h,&r);
	a=3.14159*r*r*h;
	b=20000/a+1;
	printf("%d",b);
	return 0;
}
