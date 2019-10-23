#include <iostream>
using namespace std;
/*
description: 
整除及整除求余运算符的应用。
/  --> 整除
%  --> 求余 （模运算符） 
output:
请输入一个二位数：23
n = 23 reversed = 32
*/
int main() {
	int n, ge, shi, n2;
	cout << "请输入一个二位数：";
	cin >> n;
	shi = n / 10;
	ge = n % 10;
	n2 = ge * 10 + shi;
	cout << "num = " << n << " reversed = " << n2 << endl; 
	return 0; 
}

