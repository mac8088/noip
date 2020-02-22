#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int fmax = 10000, a[fmax+1] = {0}, n, max = -fmax, temp = 0;
	cin >> n;
	for(int i=0; i<n; ++i)
	{
		cin >> temp;
		a[temp]++;
		if(temp > max) max = temp;
	}
	for(int i=0; i<=max; ++i)
		cout << a[i] << endl;
	return 0;
}
