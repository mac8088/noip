#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int m;
	cin >> m;
	int a = m/100;
	int b = (m/10)%10;
	int c = m%10;
	int n = c*100+b*10+a;
	cout<<"n=" << n << endl;
	return 0; 
}

//--------------------------------
//234
//n=432
//--------------------------------
