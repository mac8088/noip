#include <iostream>
using namespace std;
/*
description: 
����������30����ͷ����һ��Ե�һ����ֳ���һ���� 
�ڶ���Ե�һ����ֳ���һ������������Ȼ��ˡ� 
�ʵ���������ʣ�¶��ٸ���ͷ�� 
output:
2
*/
int main() {
	int n = 30;
	n = n/2 -1;  //14 
	n = n/2 -1;  //6 
	n = n/2 -1;  //2 
	cout << "����������ʣ�� = " << n  << endl;
	return 0; 
}
