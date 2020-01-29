#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int n;
	int j, y, t;
	int j_sum=0, y_sum=0, t_sum=0;  // must have init value 
	cin >> n;
	for(int i=0; i<n; i++)
	{
		cin >> j >> y >> t;
		j_sum += j; y_sum += y; t_sum += t;
	}
	printf("%d %d %d %d\n", j_sum, y_sum, t_sum, (j_sum + y_sum + t_sum));
}

