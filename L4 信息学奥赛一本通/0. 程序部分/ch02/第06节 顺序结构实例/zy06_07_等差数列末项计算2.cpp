#include<iostream>
using namespace std;
int main()
{
	int a1,a2,n;
	cin>>a1>>a2>>n;
	int an = a1+(a2-a1)*(n-1);					//�Ȳ�����ͨ�� 
	cout << an << endl;
	cout << (a1 + an) * n / 2 << endl;			//�Ȳ��������
	return 0; 
}

//--------------------------------

//--------------------------------
