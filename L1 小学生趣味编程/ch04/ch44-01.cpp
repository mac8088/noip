#include <iostream>
using namespace std;
/*
 ��44�Σ��ǹȲ��� 
--while����Ӧ�� 
*/ 
int main()
{
	long long x, count = 0;
	cout << "x = ";
	cin >> x;
	while(x != 1)
	{
		cout << x << "---->";
		if(x%2 == 1) 
			x = x*3 + 1;
		else
			x /= 2;
		count++;
	} 	
	cout << x << endl;
 	cout << "������" << count << endl;
	return 0;
}

//--------------------------------
//x = 6
//6---->3---->10---->5---->16---->8---->4---->2---->1
//������8
//--------------------------------
