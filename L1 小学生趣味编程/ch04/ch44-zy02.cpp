#include <iostream>
using namespace std;
/*
 ��44�Σ��ǹȲ��� 
--��ҵ02
����2020-1+2-3+4-5+....n (nΪ����ʱ����ż��ʱ��) 
*/ 
int main()
{
	int i, sum, n;
	sum = 2020;
	cout << "n = ";
	cin >> n;
	i = 1;
	while(i <= n)
	{
		if(i % 2 == 1)
			sum -= i;
		else
			sum += i;
		i++;
	}
	cout << sum << endl;
	return 0;
}

//--------------------------------
//n = 2020
//3030
//--------------------------------
