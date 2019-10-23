#include <iostream>
using namespace std;
/*
description: 

output:
数 = 438
*/
int main() {
	int ge, shi, bai, shu;
	shi = 3;
	bai = shi + 1;   //百位 
	ge = bai * 2;    //个位 
	shu = 100 * bai + 10 * shi + ge;
	cout << "数 = " << shu << endl; 
	return 0; 
}
