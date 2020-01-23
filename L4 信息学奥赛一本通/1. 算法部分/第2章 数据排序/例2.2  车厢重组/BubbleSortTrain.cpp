#include <iostream>
using namespace std;
long n, i, j, t, s, a[10000];
int main()
{
	cin >> n;  // Total number of carriers
	for(i=1; i<n; i++)   
		cin >> a[i];  // Enter n carrier number
	for(i=1; i<=n-1; i++)  // to write another way for Bubble sort 
	{
		for(j=1; j<=n-i; j++)
		{
			if(a[j] > a[j+1])  // Determine if the carrier number is in reverse order
				swap(a[j], a[j+1]);  // two carrier rotates
				s++;  // Count the number of times the carrier rotates
		}
	}
	cout << s;
	return 0;
}
