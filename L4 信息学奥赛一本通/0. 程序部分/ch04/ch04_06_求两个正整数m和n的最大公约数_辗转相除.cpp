#include<iostream>
using namespace std;
int main()
{
	int m, n;
	cin >> m >> n;
	int r = m%n;
	while(r!=0)			//�����ǣ� while(r) --> c++�з�0���� 
	{
		m = n;
		n = r;
		r = m%n;
	} 
	cout << "���Լ����" << n << endl;
	return 0;
}

//--------------------------------
//������ 
//
//--------------------------------
