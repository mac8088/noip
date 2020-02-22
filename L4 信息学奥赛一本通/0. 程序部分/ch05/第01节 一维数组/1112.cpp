#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int a[10001], max = -10001, min = -max, n;
	cin >> n;
	for(int i=0; i<n; ++i)
	{
		scanf("%d", &a[i]);
		if(a[i] > max) max = a[i];
		if(a[i] < min) min = a[i];
	}
	printf("%d", max-min);
	return 0;
}
