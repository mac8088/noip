#include <iostream>
using namespace std;
/*
 第42课，最小公倍数 
 枚举算法 
*/ 
int main()
{
	int x, y, temp, s, i = 1;
	cout << "请输入两个自然数：";	
	cin >> x >> y;
	if(x>y) 
	{
		temp = x;
		x = y;
		y = temp;
	}
	
	//ensure x < y, y is big number
	s = y * i;
	while(s%x != 0)
	{
		i++;
		s = y * i;
	}
	cout << "最小公倍数：" << s << endl;	
	return 0;
}

//请输入两个自然数：3 4
//最小公倍数：12
//
//--------------------------------
//Process exited after 5.938 seconds with return value 0
