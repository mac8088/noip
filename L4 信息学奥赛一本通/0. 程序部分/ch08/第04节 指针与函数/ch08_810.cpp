#include <cstdio>
#include <cmath>
using namespace std;
int n, a[10001];
bool isprime(int n)
{
	if(n<2) return false;
	if(n==2) return true;
	for(int i=2; i<=sqrt(n); ++i)
		if(n%i==0)
			return false;
	return true;
}
int * find()
{
	for(int i=1; i<=n; ++i)
		if(isprime(a[i])) 
			return &a[i];  // return address, also: return a+i
	return NULL;
}
int main()
{
	scanf("%d", &n);
	for(int i=1; i<=n; ++i)
		scanf("%d", &a[i]);
	int *p = find();
	// ouput the pointer address and itself
	if(p!=NULL) printf("%d\n%d\n", p, *p); 
	else printf("can't find!");
	return 0;
}

//7
//1 6 9 2 3 4 5
//4276368
//2