#include<iostream>
#include<cstdio>
using namespace std;
int a[101][101], b[101][101], c[101][101];
int main()
{	
	int n, m, k;
	cin >> n >> m >> k;  // notice the order of n,m,k
	
	//init array a
	for(int i=1; i<=n; ++i)
		for(int j=1; j<=m; ++j)
			scanf("%d", &a[i][j]);

	//init array b
	for(int i=1; i<=m; ++i)
		for(int j=1; j<=k; ++j)
			scanf("%d", &b[i][j]);

	// a*b = c
	for(int i=1; i<=n; ++i)
		for(int j=1; j<=k; ++j)
			for(int t=1; t<=m; ++t)
				c[i][j] += a[i][t] * b[t][j];  // 0 .. m-1 or 1 .. m
	
	// output
	for(int i=1; i<=n; ++i)
	{
		for(int j=1; j<=k; ++j)
			printf("%d ", c[i][j]);
		cout << endl;
	}
	return 0;
}
