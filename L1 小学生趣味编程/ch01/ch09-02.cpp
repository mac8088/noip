#include <iostream>
using namespace std;
/*
description: 
cin >> ����ȡ�������ʹ��cin���±�д�ˡ����������ﲼ���� 
output:
a, b = 34 76
a = 34, b = 76
a = 76, b = 34
*/
int main() {
	int a, b, t;
	cout << "a, b = ";
	cin >> a >> b;
	cout << "a = " << a << ", b = " << b << endl; //�������ǰa,b��ֵ 
	t = a;
	a = b;
	b = t;
	cout << "a = " << a << ", b = " << b << endl; //���������a,b��ֵ 
	return 0; 
}

