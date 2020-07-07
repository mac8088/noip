#include <iostream>
#include <cstdio>
using namespace std;
int digit(int n, int k)
{
	if(k<=1) return n%10;
	else return digit(n/10, --k);
}

int main()
{
	int n, k;
	cin >> n >> k;
	int c = digit(n,k);
	cout << c << endl;
	return 0;
}