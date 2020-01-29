#include<cstdio>
using namespace std;
int main()
{
	int n,b,c,d;
	scanf("%d",&n);
	b=n/100;
	c=(n%100)/10;
	d=n%10;
	printf("%d%d%d",d,c,b);
	return 0;
}
