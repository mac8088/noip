#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	int n, area = 0;
	cin >> n;
	int a[n] = {0}, b[n] = {0};
	for(int i=0; i<n; i++)
		cin >> a[i];
	for(int i=0; i<n; i++)
		cin >> b[i];
	for(int i=0; i<n; i++)
		area += a[i] * b[i];
	cout << area << endl;
	return 0;	
}
