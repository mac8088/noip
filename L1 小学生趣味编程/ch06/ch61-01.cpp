#include <iostream>
using namespace std;
/*
 ��61�Σ���ֳ��� 
 ���� 
*/ 
int main()
{
	int a1, a2, a3, a4, a5, n;
	cout << "1~5�ŵĳɼ���";
	cin >> a1 >> a2 >> a3 >> a4 >> a5;
	cout << "����ѧ�� 1��5��";
	cin >> n;
	switch(n)
	{
		case 1: cout << a1; break;
		case 2: cout << a2; break;
		case 3: cout << a3; break;
		case 4: cout << a4; break;
		case 5: cout << a5; break;
		default: cout << "�����ѧ�Ų����ڣ�";
	} 
	return 0;
}

//--------------------------------

//--------------------------------
