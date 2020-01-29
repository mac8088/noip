#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	int x, y,sum;
	cin >> x >> y;
	for(int i=x; i<=y; i++)
	{
		if(i%2!=0) sum+=i;
	}
	printf("%d\n", sum);
}

