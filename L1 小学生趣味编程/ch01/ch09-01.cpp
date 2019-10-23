#include <iostream>
using namespace std;
/*
description: 
cin >> 流提取运算符 
output:
请输入人数和平均每人种的棵数 42 2
总的棵树：84
*/
int main() {
	int a, b, s;
	cout << "请输入人数和平均每人种的棵数 "; 
	cin >> a;
	cin >> b;
	s = a * b;
	cout << "总的棵树：" << s << endl; 
	return 0; 
}

