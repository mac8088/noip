#include <iostream>
using namespace std;
int main()
{
	int a0=0,a1=1,a2,i,n;
	cin >> n;
	for(i=2;i<n;i++)
	{
		a2=a0+a1;
		cout<<a2<<endl;
		a0=a1;
		a1=a2;
	}
	return 0;
}
