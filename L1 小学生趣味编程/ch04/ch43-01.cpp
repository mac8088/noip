#include <iostream>
using namespace std;
/*
 ��43�Σ����Լ�� 
 --շת��� 
*/ 
int main()
{
	long long m, n, r;
	cout << "����������������";
	cin >> m >> n;
	r = m % n;               // 15%18 = 15
	while(r!=0)
	{
		m = n;
		n = r;
		r = m % n;
	}
	cout << "���Լ����" << n << endl;	
	return 0;
}


//����������������15 18
//���Լ����3
//
//--------------------------------
//Process exited after 4.098 seconds with return value 0
