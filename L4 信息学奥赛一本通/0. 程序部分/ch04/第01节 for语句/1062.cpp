#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n;
	int max=-1, temp=0;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> temp;
		if(max<temp) max = temp;
	}
	printf("%d\n", max);
}

