#include<iostream>
using namespace std;
int main()
{
	int a;
	cin>>a;
	switch(a)
	{
		case 1:
		case 3:
		case 5:
			cout<<"NO" << endl; break;
		default:
			cout<<"YES" << endl;
	}
	return 0;
}
