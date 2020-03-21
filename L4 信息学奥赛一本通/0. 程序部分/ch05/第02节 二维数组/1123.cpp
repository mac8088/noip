#include<iostream>
#include<cstdio>
using namespace std;
int a[101][101],b[101][101];
int main()
{	
	int m, n, s = 0;
	cin >> m >> n;
	
	//init array a
	for(int i=1; i<=m; ++i)
		for(int j=1; j<=n; ++j)
			cin >> a[i][j];   //scanf("%d", &a[i][j]);
	//init array b
	for(int i=1; i<=m; ++i)
		for(int j=1; j<=n; ++j)
			cin >> b[i][j];	
	//compare
	for(int i=1; i<=m; ++i)
		for(int j=1; j<=n; ++j)
			if(a[i][j] == b[i][j]) s++;
	
	printf("%.2f", s*1.0/(m*n*1.0)*100);
	return 0;
}
