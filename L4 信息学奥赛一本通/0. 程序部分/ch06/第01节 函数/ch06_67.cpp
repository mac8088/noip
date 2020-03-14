#include <cstdio>
#include <cmath>
using namespace std;

int prime(int);  //declare the function

int main()
{
	int n;
	scanf("%d", &n);
	if(prime(n)) printf("%s\n", "yes");
	else printf("%s\n", "no");
}

int prime(int x)
{
	if(x<2) return 0;
	if(x==2) return 1;
	int j=2;
	
	//for 2 to sqrt(i)
	while(j<=sqrt(x) && x%j!=0) j++;
	
	if(x%j==0) return 0;
	else return 1;
}
