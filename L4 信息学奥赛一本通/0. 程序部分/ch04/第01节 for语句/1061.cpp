#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n;
	double sum, temp;
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> temp;
		sum += temp;
	}
	printf("%d %.5f\n", int(sum), sum/n);
}

