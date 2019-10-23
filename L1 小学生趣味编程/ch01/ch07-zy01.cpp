#include <iostream>
using namespace std;
/*
description: 

output:
a = 200, b = 100
*/
int main() {
	int a, b;
	a = 100;
	b = 200;
	a = b - a;   //a = 100, b = 200
	b -= a;      //b = 100, a = 100
	a += b;      //a = 200, b = 100
	cout << "a = " << a << ", b = " << b << endl; 
	return 0; 
}
