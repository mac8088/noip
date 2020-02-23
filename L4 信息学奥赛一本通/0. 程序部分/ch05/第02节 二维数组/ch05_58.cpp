#include<cstdio>
#include<iostream>
#include<iomanip>

using namespace std;

const int n = 3;
int a[n+1][n+1];  //Matrix 

int main()
{
	for(int i=0; i<n; ++i)
		for(int j=0; j<n; ++j)
			cin >> a[i][j];    // init array

	for(int i=0; i<n; ++i)
	{
		for(int j=0; j<n; ++j)
			cout << setw(5) << a[j][i];   // The Inverted Matrix
		cout << endl;
	}
	return 0;
}


// 2 1 3
// 3 3 1
// 1 2 1
//
//    2    3    1
//    1    3    2
//    3    1    1

