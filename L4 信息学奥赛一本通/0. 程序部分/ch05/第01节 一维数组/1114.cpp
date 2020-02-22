#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	double a[1001], b[1001] = {0.0}, max = -1000000.0, min = -max, sum=0.0, avg = 0.0, wc = max;
	int n;
	cin >> n;
	for(int i=0; i<n; ++i)
	{
		scanf("%lf", &a[i]);
		sum+=a[i];
		if(a[i] > max) max = a[i];
		if(a[i] < min) min = a[i];
	}
	sum -= (max + min);
	avg = sum/((n-2)*1.0);
	
	//cacl each of tolerance
	for(int i=0; i<n; ++i)
		if(a[i] != max && a[i] != min) b[i] = abs(avg - a[i]);

	//compare and get the max differ
	for(int i=0; i<n; ++i)
		if(b[i] > wc) wc = b[i];	
	printf("%.2lf %.2lf", avg, wc);
	return 0;
}
