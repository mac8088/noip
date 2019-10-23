#include <iostream>
using namespace std;
/*
description: 
单精度实数 float 
output:
a, h = 3 5
s = 7.5
*/
int main() {
	int a, h;
	float s;
	cout << "a, h = ";
	cin >> a >> h;
	s = (a * h) / 2.0;   //这里要写成实数2.0，不能写成整数2 
	cout << "s = " << s << endl; 
	return 0; 
}

