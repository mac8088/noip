#include <iostream>
using namespace std;
/*
 ��41�Σ���ţ�������� 
 --��ѭ�� 
 ���֮��Сѧĳ����Ϣѧ����ͬѧ�ǵ�ƽ���֣�
 ��-1��ʾ������ 
*/  
int main()
{
	int i = 0;
	float n, pjfen, sum = 0.0;
	cin >> n;
	while(n != -1)  //-1�൱���������ɣ����Բ�����ѭ���� 
	{
		i++;
		sum += n;
		cin >> n;
	}
	
	//data check for div operation. 
	if(i != 0)
	{
		pjfen = sum / i;
		cout << "ƽ����" << pjfen;	
	}
	return 0;
}
