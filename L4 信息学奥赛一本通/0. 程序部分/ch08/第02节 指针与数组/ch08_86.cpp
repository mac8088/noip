#include <cstdio>
using namespace std;
int n;
int *a;
int main()
{
	scanf("%d", &n);
	a=new int[n+1];
	for(int i=1; i<=n; i++)  // init and input
		scanf("%d", &a[i]);
	for(int i=2; i<=n; i++)  // process
		a[i]+=a[i-1];
	for(int i=1; i<=n; i++)  // output
		printf("%d ", a[i]);
	return 0;
}
