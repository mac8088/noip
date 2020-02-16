#include <cstdio>
#include <iostream>
#include <cmath>
using namespace std;
int a[50001];  //init 
int main()
{
	int n, m, z = 1;
	cin >> n >> m;
	for(int i=1; i<=n; ++i) a[i] = 0; //person1 turn off
	for(int j=2; j<=m; j++)
		for(int i=1; i<=n; ++i)
			if(i%j==0) a[i]=abs(a[i]-1);
	for(int i=1; i<=n; ++i) 
	{
		if(a[i] == 0)
		{
			if(z) z = 0;   //learn one point
			else cout << ",";
			cout << i;     //output the index
		}
	}
	return 0;	
}
