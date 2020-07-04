#include <iostream>
using namespace std;
int xn(int);
int tt, x;
int main()
{
	int n;
	cin >> x >> n;
	xn(n);
	cout << x << "^" << n << "=" << tt << endl;
	return 0;
}
int xn(int n)
{
	if(n==0) tt = 1;
	else 
	{
		xn(n-1);
		tt *= x;  // 递归调用过程 xn(n-1), 求x的n-1次 
	}
}
