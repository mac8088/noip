#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	for(int a=1; a<=9; ++a)
		for(int b=0; b<=9; ++b)
			for(int c=0; c<=9; ++c)
				if(a*a*a + b*b*b + c*c*c == a*100+b*10+c) 
					cout << setw(6) << a*100+b*10+c;					//setw��������ĳ��� 
				
	return 0;
}

//--------------------------------
//����λ��100��999 �е�ˮ�ɻ��� 
//   153   370   371   407
//--------------------------------
