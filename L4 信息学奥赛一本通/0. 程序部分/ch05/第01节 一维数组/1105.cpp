#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
// way1:
//	int size;
//	cin >> size;
//	int n[size] = {0};
//	for (int i=0; i<size; i++)
//		scanf("%d", &n[i]);
//	for (int i = size-1; i>=0; i--)
//		printf("%d ", n[i]);
//	return 0;

	int n;
	scanf("%d", &n);
	int a[n] = {0};
	for(int i=1; i<=n; i++)
		scanf("%d", &a[i]);
	for(int i=1; i<=n/2; i++)
		swap(a[i], a[n+1-i]); //swap
	for(int i=1; i<=n; i++)
		printf("%d ", a[i]);
	return 0;
}
