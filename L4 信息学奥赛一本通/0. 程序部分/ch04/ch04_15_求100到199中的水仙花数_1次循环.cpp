#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int a, b, c;
	for(int i=100;i<=999;i++)
	{
		a = i/100;								//��ȡ��λ 
		b = (i/10)%10;							//��ȡʮλ 
		c = i%100;								//��ȡ��λ 
		if(a*a*a + b*b*b + c*c*c == a*100+b*10+c) 
			cout << setw(6) << a*100+b*10+c;	//setw��������ĳ��� 
	}			
	return 0;
}

//--------------------------------
//����λ��100��999 �е�ˮ�ɻ��� 
//   153   370   371   407
//--------------------------------
