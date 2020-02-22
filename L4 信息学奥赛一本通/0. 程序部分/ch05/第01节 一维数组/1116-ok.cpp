#include <cmath>
#include <cstdio>
#include <iostream>
using namespace std;
int main()
{
	int n, k=1, maxn=0, a[100001] = {0};
	cin >> n;
	a[0] = -34567;   //a[0] != a[1]
	for(int i=1; i<=n; i++)   // from 1 to n
	{
		scanf("%d", &a[i]);
		if(a[i]==a[i-1]) k++;
		else k=1;
		if(k>maxn) maxn=k;
	}
	cout << maxn;
	return 0;
}
