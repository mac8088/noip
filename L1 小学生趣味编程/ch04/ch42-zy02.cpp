#include <iostream>
using namespace std;
/*
 ��42�Σ���С������ 
 ö���㷨 
 ��˲μ��˶����Ϣѧ�����������һ�α���ʱ���֣�
 �����α���������98�֣���ô�����б�����ƽ������92�֣�
 �����α���������78�֣�����ƽ������87�֡�
 ����˹��μ��˶��ٴα����� 
*/ 
int main()
{
	int x;
	x = 2;
	while(92*x-98 != 87*x - 78)
	{
		x++;
	}
	cout << x << endl;	
	return 0;
}

//4
//--------------------------------
//Process exited after 7.842 seconds with return value 0

