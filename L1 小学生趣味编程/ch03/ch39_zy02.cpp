#include <iostream>
#include <ctime>
#include <cstdlib> 
using namespace std;
int main()
{
	const int MAX = 10;
	srand(time(0));
	int m, n, countm, countn;
	countm = countn = 0;
	for(int i=0; i < MAX; i++)
	{
		m = rand()%3+1;  // 0, 1, 2 --> 1, 2, 3
		cout << "�������" << endl;
		cout << "1.���� 2.ʯͷ 3.��" << endl;
		cin >> n;
		if(n<1 || n>3)
			cout << "������1��3���˾���Ч��" << endl;
		else
		{
			switch(m-n)
			{
				case -2: 
				case 1:  cout << "�����Ӯ��" << endl; countm++; break;
				case 0:  cout << "ƽ�֣�" << endl; break;
				default: cout << "��Ӯ��" << endl; countn++; break;
			}
		} 
	}
	
	cout << "�����Ӯ��" << countm << endl;
	cout << "��Ӯ��" << countn << endl;
	return 0;
}



