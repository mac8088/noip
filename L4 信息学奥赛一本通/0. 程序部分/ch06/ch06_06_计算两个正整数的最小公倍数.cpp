#include <iostream>
using namespace std;
int x, y;

//���Լ�� 
int gcd(int x, int y)
{
	int r = x%y;  // r�Ǿֲ������� �ֲ�����x,y ����ȫ�ֱ��� 
	while(r!=0)
	{
		x = y;
		y = r;
		r = x%y;  //շת��� 
	}
	return y;
}

//��С������ 
int lcm()
{
	return x*y/gcd(x,y);  // ����x,y��ȫ�ֱ��� 
}

int main()  //gcd �� lcm �� main()ǰ��ɽ�ϲ������� 
{
	cin >> x >> y;
	cout << gcd(x,y) << endl;
	cout << lcm() << endl;
	return 0;
}
