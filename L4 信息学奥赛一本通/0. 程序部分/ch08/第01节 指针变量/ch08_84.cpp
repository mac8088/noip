#include<cstdio>
using namespace std;
int a=10;
int *p;
int **pp;

int main()
{	
	p=&a;  // let pointer p to point out a
	pp=&p; // let pointer pp to point out p
	printf("%d=%d=%d\n",a,*p,**pp);  // **p indirectly access variable a
	return 0;
}