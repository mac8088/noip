#include <cstdio>
using namespace std;
void swap(int *x, int *y)
{
	int t =*x;
	*x=*y;
	*y=t;
}
void sort(int *x, int *y, int *z)
{
	if(*x>*y) swap(x,y);
	if(*x>*z) swap(x,z);
	if(*y>*z) swap(y,z);
}
int main()
{
	int a, b, c;
	scanf("%d%d%d", &a,&b,&c);
	sort(&a,&b,&c);
	printf("%d %d %d", a, b, c);
	return 0;
}