#include <iostream>
#include <ctime>
#include <cstdlib> 
using namespace std;
int main()
{
	int x, y, symbol, ans;
	int n, temp, sum = 0;
	//�����������
	srand(time(0));
	
	for(int i=1; i<=10;i++)
	{
		x = rand()%9+1;
		y = rand()%9+1;
		symbol = rand()%4;
		if(x < y && symbol==1)
		{
			temp = x;
			x = y;
			y = temp;
		}
		
		//����ǳ�������������0��������� 
		if(symbol==3){
			while(y==0){
				y = rand()%9+1;
			}
		}
		
		// ensure x > y
		switch(symbol)
		{
			case 0: 
				ans = x + y; 
				cout << x << "+" << y << "="; 
				break;
			case 1:
				ans = x - y; 
				cout << x << "-" << y << "="; 
				break;
			case 2:
				ans = x * y; 
				cout << x << "*" << y << "="; 
				break;
			case 3:
				ans = x / y; 
				cout << x << "/" << y << "="; 
				break;
		}
		
		// you input the number
		cin >> n;
		
		if(n==ans)
		{
			sum+=10;
			cout << "�ԣ�" << endl;
		} 
		else 
			cout << "��" << endl;
	}
	cout  << "�÷֣�" << sum << endl;
	return 0;
}

