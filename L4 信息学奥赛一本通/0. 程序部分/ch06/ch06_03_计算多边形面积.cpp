#include <iostream>
#include <cstdio>
#include <cmath>
using namespace std;
double area(double, double, double);
//P117, ͼ���������������������������֮�� 
int main()
{
	double b1, b2, b3, b4, b5, b6, b7,s;
	cout << "please input b1, b2, b3, b4, b5, b6, b7:" << endl;
	cin >> b1 >> b2 >> b3 >> b4 >> b5 >> b6 >> b7;
	s = area(b1, b5, b6) + area(b2,b6,b7) + area(b3,b4,b7); //�������κ���area
	printf("s=%10.3lf\n",s); //������λС��
	return 0; 
}
//�˺���Ϊ����-�ؾ��ع�ʽ 
double area(double a, double b, double c)
{
	double p = (a+b+c)/2;
	return sqrt(p * (p -a ) * (p - b ) * (p - c));
}
