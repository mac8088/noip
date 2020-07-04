#include <iostream>
using namespace std;
int xn(int);
int x;
int main()
{
	int n;
	cin >> x >> n;
	cout << x << "^" << n << "=" << xn(n) << endl;
	return 0;
}
int xn(int n)
{
	if(n==0) return 1;  //µÝ¹é±ß½ç 
	else return x*xn(n-1); //µÝ¹éÊ½ 
}
