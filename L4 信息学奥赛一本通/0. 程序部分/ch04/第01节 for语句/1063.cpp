#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n, temp, max=-99999999, min=99999999;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> temp;
		if(max < temp) max = temp;
		if(min > temp) min = temp;
	}
	printf("%d\n", max-min);
}

