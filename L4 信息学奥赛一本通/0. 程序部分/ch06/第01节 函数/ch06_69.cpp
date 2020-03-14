#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;
void common(int x,int y);

int main()
{   
	int a,b;
	cin>>a>>b;
	common(a,b);
}

//12 8
//    3    2

void common(int x,int y)
{   
	int m=x,n=y,r;    // get GCD
	do
	{    
		r=m%n;
        m=n;
        n=r;
	} while (r!=0);

	x/=m;              // DIV by GCD
    y/=m;
    cout << setw(5) << x << setw(5) << y << endl;
}

