#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int m, n, sum = 0;
	cin >> m >> n;
	int a[m+1][n+1];
	
	//1. init
	for(int i=1; i<=m; ++i)
		for(int j=1; j<=n; ++j)
			cin >> a[i][j];
	
	//2. sum for the first col and the last col of each row.
	for(int i=1; i<=m; ++i)
		sum+=(a[i][1] + a[i][n]);  

	//3. sum for the second col to last -1 col of the first row and the last row.
	for(int j=2; j<=n-1; ++j)
		sum+=(a[1][j] + a[m][j]);

	cout << sum << endl;
	return 0;
}



