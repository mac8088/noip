#include <iostream>
using namespace std;
/*
description: 
小写变大写，ASCII码 
output:
请输入a ~ z 中间的任意一个字母：a
字符 = a 反转 = A
*/
int main() {
	char n, N;
	cout << "请输入a ~ z 中间的任意一个字母：";
	cin >> n;
	N = n - 32;
	cout << "字符 = " << n << " 反转 = " << N << endl; 
	return 0; 
}

