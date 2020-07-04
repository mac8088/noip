#include <cstdio>
using namespace std;
int main()
{
	int a[5],i,*pa=a;
	for(i=0;i<5;i++)
		scanf("%d", a+i); // also could write as: pa+i or &a[i]
	for(i=0;i<5;i++)
		printf("a[%d]=%d\n",i,*(a+i)); // also could write as: *(pa+i) or pa[i] or a[i]
	return 0;
}

//1 2 3 4 5
//a[0]=1
//a[1]=2
//a[2]=3
//a[3]=4
//a[4]=5
