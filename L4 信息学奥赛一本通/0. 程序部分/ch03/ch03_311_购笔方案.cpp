#include<iostream>
using namespace std;
int main()
{
	int a, b, c, x, y;		//a,b,c�ֱ��ʾ����ʷ����У�6Ԫ��5Ԫ��4Ԫ�ʵ���Ŀ�� 
	cin >> x;				//x��y�ֱ��ʾʣ��İ�Ѻ��������4Ԫ�ʺ�ʣ�µ�Ǯ�� 
	c = x / 4;
	y = x % 4;
	switch(y)				//���򷽰� 
	{
		case 0: a = 0; b = 0; break;
		case 1: a = 0; b = 1; c--; break;
		case 2: a = 1; b = 0; c--; break;
		case 3: a = 1; b = 1; c-=2; break;
	} 
	cout << a << ' ' << b << ' ' << c << endl;		//������֮���ÿո��� 
	return 0; 
}

/*
Ҫ��Ҫ������ıʣ�Ҫ��Ǯ���꣡ 
*/
