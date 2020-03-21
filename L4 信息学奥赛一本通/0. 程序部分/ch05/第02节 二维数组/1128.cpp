#include <cstdio>
#include <cmath>
using namespace std;
int a[1001][1001];
double b[1001][1001];
int main()
{
	int n,m;  // n is row; m is column
	scanf("%d%d", &n, &m);
	
	//input
	for(int i=1; i<=n; i++)
		for(int j=1; j<=m; j++)
		{
			scanf("%d", &a[i][j]);
			b[i][j] = a[i][j];
		}
			
	//process
	for(int i=2; i<=n-1; i++)
		for(int j=2; j<=m-1; j++)
			b[i][j] = round((a[i-1][j] + a[i+1][j] + a[i][j-1] + a[i][j+1] + a[i][j])/5.0);
	
	//output
	for(int i=1; i<=n; i++)
	{
		for(int j=1; j<=m; j++) printf("%.0lf ", b[i][j]);
		printf("\n");
	}		
	return 0;
}
