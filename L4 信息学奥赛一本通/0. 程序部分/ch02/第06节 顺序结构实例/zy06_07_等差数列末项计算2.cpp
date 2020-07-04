#include<iostream>
using namespace std;
int main()
{
	int a1,a2,n;
	cin>>a1>>a2>>n;
	int an = a1+(a2-a1)*(n-1);					//等差数列通项 
	cout << an << endl;
	cout << (a1 + an) * n / 2 << endl;			//等差数列求和
	return 0; 
}

//--------------------------------

//--------------------------------
