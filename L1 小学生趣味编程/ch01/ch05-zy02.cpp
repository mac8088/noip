#include <iostream>
using namespace std;
/*
description: 
���տ���43�ˣ�ƻ����42�ˣ���ݮ��45�ˣ��ʹ������ˣ� 
output:
sum = 130
*/
int main() {
	int sum, n;
	sum = 0;    //��ʼ�� 
	n = 43;
	sum = sum + n;
	n = 42;
	sum = sum + n;
	n = 45;
	sum = sum + n;
	cout << "sum = " << sum << endl;
	return 0; 
}
