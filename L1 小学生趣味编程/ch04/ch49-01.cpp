#include <iostream>
#include <cmath>
using namespace std;
/*
 ��49�Σ����� 
 --��С��������  
*/ 
int main()
{
	double x, y;
	long long num;
	cout << "������һ����С��" << endl;
	do
	{
		cout << "x= ";
		cin >> x;
	} while(x>=1 || x<=0);
	
	num = 1;
	do
	{
		num *= 10;
		y = x * num;
	} while(fabs(y - (int)y) > 1e-9);
	
	cout << (int)y << endl;
	return 0;
}

//--------------------------------
//17
//10001
//2
//--------------------------------
