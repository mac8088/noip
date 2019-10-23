#include <iostream>
#include <iomanip>
using namespace std;
/*
description: 
使用头文件iomanip,为了使用setw操作符来设置域宽 
output:
        18
   +   870
----------
       888
*/
int main() {
	int a, b, s;
	a = 18;
	b = 870;
	s = a + b;
	cout << setw(10) << a << endl; 
	cout << setw(4) << "+" << setw(6) << b << endl; 
	cout << "----------" << endl; 
	cout << setw(10) << s << endl; 
	return 0; 
}

