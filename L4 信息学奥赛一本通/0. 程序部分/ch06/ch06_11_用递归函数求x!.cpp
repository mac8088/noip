#include <iostream>
using namespace std;
int fac(int);
int main()
{
	int x;
	cin >> x;
	cout << x << "!=" << fac(x) << endl;  //主程序调用fac(x) 求x! 
	return 0;
}
int fac(int n)
{
	return n==0 ? 1: n * fac(n-1);  // 调用函数 fac(n-1) 递归求 (n-1)! 
}
