#include <iostream>
using namespace std;
int main()
{
	float min, x;
	int i, n;
	cout << "n=";
	cin >> n;
	cout << "�������1������";
	cin >> x;
	min = x;
	for(i=2;i<=n;i++)
	{
		cout << "�������"<<i<<"������";
		cin >> x;
		if(x<min) min=x;	
	}
	cout << "��С�����ǣ�" << min;
	return 0;
}


