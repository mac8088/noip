#include <iostream>
using namespace std;
/*
description: 
���������������������Ӧ�á�
/  --> ����
%  --> ���� ��ģ������� 
output:
������һ����λ����23
n = 23 reversed = 32
*/
int main() {
	int n, ge, shi, n2;
	cout << "������һ����λ����";
	cin >> n;
	shi = n / 10;
	ge = n % 10;
	n2 = ge * 10 + shi;
	cout << "num = " << n << " reversed = " << n2 << endl; 
	return 0; 
}

