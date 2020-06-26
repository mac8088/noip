#include <cstdlib>
#include <iostream> 
using namespace std;
#define size 100
int a[size+1],n,d,i=0,j;
int main()
{
	cout << "Please enter a number(N) base 10:"; 
	cin >> n;
	cout << "Please enter a number(d):"; 
	cin >> d;
	do{
		a[++i]=n%d;
		n=n/d;
	}while(n!=0);
	for(j=i;j>=1;j--) cout << a[j];
	return 0;
}

//Please enter a number(N) base 10:9413
//Please enter a number(d):8
//22305