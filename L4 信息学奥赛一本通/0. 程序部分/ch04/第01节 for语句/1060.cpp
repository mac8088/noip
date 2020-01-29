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
	printf("%.4f\n", sum/n);
}

