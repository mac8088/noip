#include <iostream>
using namespace std;
/*
description: 

output:
�� = 438
*/
int main() {
	int ge, shi, bai, shu;
	shi = 3;
	bai = shi + 1;   //��λ 
	ge = bai * 2;    //��λ 
	shu = 100 * bai + 10 * shi + ge;
	cout << "�� = " << shu << endl; 
	return 0; 
}
