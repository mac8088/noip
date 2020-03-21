#include<iostream>
#include<cstdio>
using namespace std;
int a[101][101],b[101][101];
int main()
{	
	int m, n;
	cin >> m >> n;
	
	//init array a
	for(int i=1; i<=m; ++i)
		for(int j=1; j<=n; ++j)
			scanf("%d", &a[i][j]);

	//init array b
	for(int i=1; i<=m; ++i)
		for(int j=1; j<=n; ++j)
			scanf("%d", &b[i][j]);

	for(int i=1; i<=m; ++i)
	{
		for(int j=1; j<=n; ++j)
			printf("%d ", a[i][j] + b[i][j]);
		cout << endl;
	}
	return 0;
}
