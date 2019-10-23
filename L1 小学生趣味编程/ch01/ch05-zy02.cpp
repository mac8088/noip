#include <iostream>
using namespace std;
/*
description: 
向日葵班43人，苹果班42人，草莓班45人，问共多少人？ 
output:
sum = 130
*/
int main() {
	int sum, n;
	sum = 0;    //初始化 
	n = 43;
	sum = sum + n;
	n = 42;
	sum = sum + n;
	n = 45;
	sum = sum + n;
	cout << "sum = " << sum << endl;
	return 0; 
}
