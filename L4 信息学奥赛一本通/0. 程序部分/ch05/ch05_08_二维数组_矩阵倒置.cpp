#include <cstdio>
#include <iostream>
#include <iomanip>

const int n = 3;
using namespace std;
int a[n+1][n+1];

int main()
{
	for (int i=1; i<=n; ++i)
	{
		for (int j=1; j<=n; ++j)
			cin >> a[i][j];
	}
	
	for (int i=1; i<=n; i++)
	{
		for (int j=1; j<=n; j++)
			cout << setw(5) << a[j][i];
		cout << endl;
	}
	
	return 0;	
}

//2 1 3
//3 3 1
//1 2 1
//    2    3    1
//    1    3    2
//    3    1    1
