#include<iostream>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	//ʹ����Ŀ��������Դ���if-else��䡣 
	int c = a > b ? a : b; 
	cout << c << endl;
	return 0;
}

/*
	�ӿɶ�����˵���������������ʺ��ڼ򵥹�ϵ�ͼ򵥱��ʽ��ֵ�� x = (a > b) ? a : b;
	�������ø����ӵ�ʱ��ʹ��if-else������Ϊ������ 
	��Ŀ��Ƕ�ף� x = a > b ? (c > b ? e: f) : g;
*/
