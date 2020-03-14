#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
const int n=10;
int a[n+1];   //don't use index 0
int main()
{
	for(int i=1; i<=n; ++i)
		cin >> a[i];   // input 10 numbers.
	
	for(int i=1; i<=n-1; ++i)  // 10 number, compare 9 times.
		for(int j=1; j<=n-i; ++j)   // or j=0; j<n-i; ++j
			if(a[j] < a[j+1]) swap(a[j], a[j+1]);   // compare and swap
		
	for(int i=1; i<=n; ++i)
		cout << " " << a[i];  // output 10 sorted numbers.
	cout << endl;
	return 0;
}
