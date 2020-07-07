#include <iostream>
#include <cstdio>
using namespace std;
int akm(int m, int n)
{
	if(m<=0) 
		return n+1;
	else {
		if(n<=0) return akm(m-1, 1);
		else return akm(m-1, akm(m, n-1));
	}
}

int main()
{
	int a, b;
	cin >> a >> b;
	int c = akm(a,b);
	cout << c << endl;
	return 0;
}