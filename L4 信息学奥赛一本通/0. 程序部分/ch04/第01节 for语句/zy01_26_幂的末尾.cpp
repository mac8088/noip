#include<iostream>
using namespace std;
int main()
{
	int a, b, k = 1;
	cin >> a >> b;
	for(int i=1; i<=b; i++)			//ѭ�������ݵ�ĩ��λ���� 
	{
		k=k*a;
		k=k%1000;					//k�洢��ai�ĺ���λ�� 
	}
	
	if(k>=100) cout << k;
	else if(k>=10) cout << "0" << k;	//�����ݱ�������λ����� 
	else cout << "00" << k;
	return 0;
}

//--------------------------------
//7 2011
//743
//--------------------------------
