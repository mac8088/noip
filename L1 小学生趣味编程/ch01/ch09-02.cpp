#include <iostream>
using namespace std;
/*
description: 
cin >> 流提取运算符，使用cin重新编写了“阿布拉卡达布拉” 
output:
a, b = 34 76
a = 34, b = 76
a = 76, b = 34
*/
int main() {
	int a, b, t;
	cout << "a, b = ";
	cin >> a >> b;
	cout << "a = " << a << ", b = " << b << endl; //输出交换前a,b的值 
	t = a;
	a = b;
	b = t;
	cout << "a = " << a << ", b = " << b << endl; //输出交换后a,b的值 
	return 0; 
}

