#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int n, x, y;
	scanf("%d%d%d",&n,&x,&y);
	
	for(int i=1; i<=n; ++i)
		printf("(%d,%d) ",x,i);
	printf("\n");
	
	for(int j=1; j<=n; ++j)
		printf("(%d,%d) ",j,y);
	printf("\n");
	
	// diagonal from Top left to Bottom right: from 1..n, i++
	for(int i=1; i<=n; ++i)
		for(int j=1; j<=n; ++j)
			if(x-y == i-j) 
				printf("(%d,%d) ", i, j);
	printf("\n");
	
	// diagonal From bottom left to top right, from n..1, i--
	for(int i=n; i>=1; --i)
		for(int j=n; j>=1; --j)
			if(x+y == i+j) 
				printf("(%d,%d) ", i, j);  //*** Key of key
	printf("\n");
	return 0;
}

//4 2 3
//(2,1) (2,2) (2,3) (2,4)
//(1,3) (2,3) (3,3) (4,3)
//(1,2) (2,3) (3,4)
//(4,1) (3,2) (2,3) (1,4)



