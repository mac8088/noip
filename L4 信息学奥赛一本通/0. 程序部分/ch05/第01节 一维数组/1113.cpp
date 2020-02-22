#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int a[101], max = -1000000, min = -max, n, sum =0;
	cin >> n;
	for(int i=0; i<n; ++i)
	{
		scanf("%d", &a[i]);
		if(a[i] > max) max = a[i];
	}
	for(int i=0; i<n; ++i)
	{
		if(a[i] < max) sum+=a[i];
	}
	printf("%d", sum);
	return 0;
}
