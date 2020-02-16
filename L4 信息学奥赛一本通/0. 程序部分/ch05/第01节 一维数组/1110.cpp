#include <cstdio>
#include <iostream>
int a[10001]; // open one big array
using namespace std;
int main()
{
	int n, m, index = -1;  //setup the init value
	cin >> n;
	for(int i=1; i<=n; i++)
		cin >> a[i];
	cin >> m;
	for(int i=1; i<=n; i++)
		if(a[i] == m)
		{
			index = i;
			break;
		}
	cout << index << endl;
	return 0;	
	
}
