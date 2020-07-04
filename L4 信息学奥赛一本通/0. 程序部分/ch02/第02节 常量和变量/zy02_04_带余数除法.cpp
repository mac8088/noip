#include<cstdio>
using namespace std;
int main()
{
	int a, b, r, l; 
	scanf("%d%d", &a, &b);
	r = a/b;
	l = a%b; 
	printf("%d %d\n", r, l);			//输出商和余数，以空格间隔 
	return 0; 
}

//--------------------------------
//10 3
//3 1
//--------------------------------
