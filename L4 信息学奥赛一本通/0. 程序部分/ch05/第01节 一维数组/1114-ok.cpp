#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
double a[1001], b[1001];
int main()
{
	int k,v;
	double w, max = -10001, min = 10001, s = 0, n;
	scanf("%lf", &n);
	for(int i=1; i<=n; ++i) cin >> a[i];
	for(int i=1; i<=n; ++i) 
	{
		s+=a[i];
		if(a[i] > max) {max = a[i]; k=i;}
		if(a[i] < min) {min = a[i]; v=i;}
	}
	w=(s-a[v]-a[k])/(n-2.0);  // must remember the index of the max/min value
	for(int i=1; i<=n; ++i) 
		if(i!=v && i!=k) b[i]=abs(w-a[i]);
	max = -10001;
	for(int i=1; i<=n; ++i) 
		if(b[i]>max) max=b[i];
	printf("%.2lf %.2lf\n", w, max);
	return 0;
}
