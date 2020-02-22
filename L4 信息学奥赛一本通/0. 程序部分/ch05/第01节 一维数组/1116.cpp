#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int n, max = -1000000; //the max value
	cin >> n;
	int a[n];
	for(int i=0; i<n; ++i)
	{
		cin >> a[i];
		if(a[i] > max) max = a[i];
	}
	
	int b[max+1] = {0};
	int maxoccur = -1000000;  //the max occur
	for(int i=0; i<n; ++i)
	{
		b[a[i]]++;
	}
	for(int i=0; i<max+1; ++i)
	{
		if (b[i] > maxoccur) maxoccur = b[i];
	}
	cout << maxoccur << endl;
	return 0;
}
