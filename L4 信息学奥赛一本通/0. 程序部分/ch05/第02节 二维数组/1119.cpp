#include<cstdio>
#include<iostream>
#include<iomanip>

using namespace std;

const int n = 5;
int a[n+1][n+1];  //Matrix 

int main()
{
	//1. init array
	for(int i=1; i<=n; ++i)
		for(int j=1; j<=n; ++j)
			cin >> a[i][j];
			
	//2. read x, y
	int x, y, temp;
	cin >> x >> y;
	
	//3. swap a[x] and a[y]
	for(int i=1; i<=n; ++i)
	{
		temp = a[x][i];
		a[x][i] = a[y][i];
		a[y][i] = temp;
		//or use swap
//		swap(a[x][i], b[y][i]);
	}	
	
	//3. output again
	for(int i=1; i<=n; ++i)
	{
		for(int j=1; j<=n; ++j)
			if(j==1) cout << a[i][j]; 
			else cout << " " << a[i][j];
		cout << endl;
	}
	return 0;
}



