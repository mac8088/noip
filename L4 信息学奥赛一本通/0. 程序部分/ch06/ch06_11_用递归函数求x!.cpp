#include <iostream>
using namespace std;
int fac(int);
int main()
{
	int x;
	cin >> x;
	cout << x << "!=" << fac(x) << endl;  //���������fac(x) ��x! 
	return 0;
}
int fac(int n)
{
	return n==0 ? 1: n * fac(n-1);  // ���ú��� fac(n-1) �ݹ��� (n-1)! 
}
