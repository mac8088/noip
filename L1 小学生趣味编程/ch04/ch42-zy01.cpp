#include <iostream>
using namespace std;
/*
 第42课，最小公倍数 
 枚举算法 
*/ 
int main()
{
	int s, n, a;
	s = 0;
	a = 10;
	cin >> n;
	while(a > n)
	{
		s++;
		a-=2;
	}
	cout << s << endl;	
	return 0;
}

//2
//4
//
//--------------------------------
//Process exited after 5.685 seconds with return value 0
