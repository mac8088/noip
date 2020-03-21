#include <iostream>
using namespace std;
int a[101][101];
int main()
{
	int n,m;  // n is row; m is column
	cin >> n >> m;
	for(int i=1; i<=n; i++)
		for(int j=1; j<=m; j++)
			cin >> a[i][j];
			
	//reserve
	for(int i=1; i<=m; i++) //column  1
	{
		for(int j=n; j>=1; j--) //row: 3
			cout << a[j][i] << " ";
		cout << endl;
	}
	return 0;
}
