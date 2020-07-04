#include <iostream>
using namespace std;
int x, y;

//最大公约数 
int gcd(int x, int y)
{
	int r = x%y;  // r是局部变量， 局部变量x,y 屏蔽全局变量 
	while(r!=0)
	{
		x = y;
		y = r;
		r = x%y;  //辗转相除 
	}
	return y;
}

//最小公倍数 
int lcm()
{
	return x*y/gcd(x,y);  // 这里x,y是全局变量 
}

int main()  //gcd 和 lcm 在 main()前，山上不必声明 
{
	cin >> x >> y;
	cout << gcd(x,y) << endl;
	cout << lcm() << endl;
	return 0;
}
