#include <iostream>
using namespace std;
int gcd(int,int);
int main()
{
	int m, n;
	cin >> m >> n;
	cout << "gcd=" << gcd(m,n) << endl; 
	return 0;
}

/*
方法1： 
求两个数的最大公约数，可以用枚举因子的方法，从两者中较小的数枚举到能被两个数同时整除且是最大的约数的方法；
也可以用辗转相除法，这里采用递归实现辗转相除掉算法：
1. 求m除以n的余数
2. 如果余数不为0，则让m=n，n=余数，重复步骤 1， 即调用子程序；
3. 如果余数为0，则终止调用子程序；
4. 输出此时的n的值。 
*/ 
int gcd(int m, int n)
{
	return n == 0 ? m: gcd (n, m%n);
}
