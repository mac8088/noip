#include <iostream>
using namespace std;
/*
 ��42�Σ���С������ 
 ö���㷨 
*/ 
int main()
{
	int x, y, temp, s, i = 1;
	cout << "������������Ȼ����";	
	cin >> x >> y;
	if(x>y) 
	{
		temp = x;
		x = y;
		y = temp;
	}
	
	//ensure x < y, y is big number
	s = y * i;
	while(s%x != 0)
	{
		i++;
		s = y * i;
	}
	cout << "��С��������" << s << endl;	
	return 0;
}

//������������Ȼ����3 4
//��С��������12
//
//--------------------------------
//Process exited after 5.938 seconds with return value 0
