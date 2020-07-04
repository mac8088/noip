#include<cstdio>
using namespace std;
int main()
{
	int a = 1, b = 1, c, k, s;
	scanf("%d", &k);
	for(int i=3; i<=k; i++)	
	{
		c = a + b;
		a = b;
		b = c;
	}
	printf("%d\n", b);
	return 0;
}

//--------------------------------
//19
//4181
//--------------------------------
