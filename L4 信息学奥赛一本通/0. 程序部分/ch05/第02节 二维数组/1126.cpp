#include <iostream>
using namespace std;
int a[1001][1001];
int main()
{
	int n, m;
	cin >> n >> m;
	
	for(int i=1; i<=n; i++)
		for(int j=1; j<=m; j++)
			cin >> a[i][j];
			
	//reserve
	for(int i=1; i<=m; i++)   //here should be m
	{
		for(int j=1; j<=n; j++)  // here should be n
			cout << a[j][i] << " ";
		cout << endl;
	}
	return 0;
}
