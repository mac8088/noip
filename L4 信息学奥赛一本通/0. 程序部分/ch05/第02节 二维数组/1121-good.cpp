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
		{
			cin >> a[i][j];	
			// if it is edge, then sum the value.
			if(i==1 || j==1 || i==m || j==n) sum+=a[i][j];  
		}
	cout << sum << endl;
	return 0;
}



