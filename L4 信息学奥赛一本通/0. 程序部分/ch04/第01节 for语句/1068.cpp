#include<iostream>
using namespace std;
int main()
{	
	int n,m,t,s=0;
	cin >> n >> m;
	for(int i=1; i<=n; i++)
	{
		cin >> t;
		if(t==m) ++s;
	}
	cout << s << endl;
	return 0;
}
