#include <cstdio>
using namespace std;
void swap(int *x, int *y)
{
	int t =*x;
	*x=*y;
	*y=t;
}
int main()
{
	int a=5, b=3;
	swap(&a, &b);
	printf("a=%d, b=%d", a, b);
	return 0;
}