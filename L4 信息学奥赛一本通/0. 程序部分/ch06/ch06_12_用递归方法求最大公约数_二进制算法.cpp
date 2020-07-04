#include <iostream>
using namespace std;
/*
方法2：
(1) 递归终止条件： gcd(m,n) == m 
(2) 递归关系式：
    m < n 时， gcd(m, n) = gcd(n, m)
	m 为偶数， n 为偶数：  gcd(m, n) = 2 * gcd(m/2, n/2) 
	m 为偶数， n 为奇数：  gcd(m, n) = gcd(m/2, n)
	m 为奇数， n 为偶数：  gcd(m, n) = gcd(m, n/2)
	m 为奇数， n 为奇数：  gcd(m, n) = gcd(n, m-n)
	
此方法和方法1相比，更加适合求高精度的最大公约数，因为只涉及到除2和减法操作，
而辗转相除法则需要高精度除法。 
*/ 
int gcd(int m, int n)
{
	if(m==n) return m;
	if (m<n) return gcd(n,m);
	if(m%2==0)
	{
		if(n%2==0) return 2 * gcd(m/2, n/2);
		else return gcd(m/2, n);
	}
	else
	{
		if(n%2==0) return gcd(m, n/2);
		else return gcd(n, m-n);
	}
}

int main()
{
	int m, n;
	cin >> m >> n;
	cout << gcd(m, n) << endl;
	return 0;
}
