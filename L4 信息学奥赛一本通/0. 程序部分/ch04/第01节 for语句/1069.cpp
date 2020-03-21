#include<iostream>
using namespace std;
int main()
{	
	int a, n,cf=1;
	cin >> a >> n;
	for(int i=1; i<=n; ++i)
		cf*=a;
	cout << cf << endl;
	return 0;
}
