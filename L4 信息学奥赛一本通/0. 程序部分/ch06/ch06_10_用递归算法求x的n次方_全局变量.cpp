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
		tt *= x;  // �ݹ���ù��� xn(n-1), ��x��n-1�� 
	}
}
