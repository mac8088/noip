#include <iostream>
using namespace std;
/*
 ��44�Σ��ǹȲ��� 
--��ҵ01 
*/ 
int main()
{
	int n, x, s = 0;
	cin >> n;
	x = n;
	while(x >= 1)
	{
		if(n % x == 0) ++s;
		--x;
	} 
	cout << s << endl;	
	return 0;
}

//--------------------------------
//8
//4
//--------------------------------
