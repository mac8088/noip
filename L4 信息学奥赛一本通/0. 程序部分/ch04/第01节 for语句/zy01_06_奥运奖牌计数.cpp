#include<cstdio>
using namespace std;
int main()
{
	int n, a, b, c, x = 0, y=0, z=0; 
	scanf("%d", &n);
	for(int i=1; i<=n; i++)	
	{
		scanf("%d%d%d", &a, &b, &c);
		x+=a; y+=b; z+=c;
	}
	printf("%d %d %d %d\n", x, y, z, (x+y+z));
	return 0;
}

//--------------------------------
//3
//1 0 3
//3 1 0
//0 3 0
//4 4 3 11
//--------------------------------
