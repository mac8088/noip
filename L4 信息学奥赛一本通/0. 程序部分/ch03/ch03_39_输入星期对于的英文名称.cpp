#include<iostream>
using namespace std;
int main()
{
	int weekday;
	cin >> weekday;
	switch(weekday)
	{
		case 1: cout << "Monday" << endl; break;
		case 2: cout << "Tuesday" << endl; break;
		case 3: cout << "Wednesday" << endl; break;
		case 4: cout << "Thursday" << endl; break;
		case 5: cout << "Friday" << endl; break;
		case 6: cout << "Saturday" << endl; break;
		case 7: cout << "Sunday" << endl; break;
		default: cout << "Input error!" << endl;
		
	}
	return 0;
}

/*
	switch ���ִ�й��̷�Ϊ3���������� ���ο�һ��ͨP51����
	1.
	2.
	3.
	
	��ʵ��ʹ��switch���ʱ��ͨ��Ҫ��ִ����ĳ��case���һ��������к�
	�ͽ�����������ִ�У�������������ִ��һ��case�������������У�
	Ϊ�ˣ�����ͨ��ʹ��break�����ʵ�֡�
	
	��ʹ��switch���ʱ����Ҫע�����¼��㣺
	1.
	2.
	3.
	4.

*/
