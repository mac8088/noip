#include<cstdio>
using namespace std;
const double PI = 3.1415926;
int main()
{
	float r, c, s;
	printf("r=");
	scanf("%f", &r);
	c = 2 * PI * r;
	s = r * r * PI;
	printf("c=%.2f s=%.2f\n", c , s);	 
	return 0;
}

//--------------------------------
//r=5
//c=31.42 s=78.54
//--------------------------------
