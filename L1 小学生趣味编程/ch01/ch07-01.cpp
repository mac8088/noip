#include <iostream>
using namespace std;
/*
description: 

output:
a = 10, b = 20
a = 20, b = 10
*/
int main() {
	int a, b, t;
	a = 10;
	b = 20;
	cout << "a = " << a << ", b = " << b << endl; //输出交换前a,b的值 
	t = a;
	a = b;
	b = t;
	cout << "a = " << a << ", b = " << b << endl; //输出交换后a,b的值 
	return 0; 
}
