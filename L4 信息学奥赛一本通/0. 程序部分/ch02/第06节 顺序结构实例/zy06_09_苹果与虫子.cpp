#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double n, x, y, a, b;
	cin >> n >> x >> y;				//����3������
	a = y/x;						//aΪyСʱ�ڳ����ܳ����ƻ������ 
	b = n - ceil(a); 				//bΪyСʱ��ʣ�µ�ƻ������ 
	if(b < 0) b = 0;				//����b<0������� 
	cout << b << endl;
	return 0; 
}

//--------------------------------

//--------------------------------
