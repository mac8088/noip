#include <iostream>
using namespace std;
/*
 第44课，角谷猜想 
--while语句的应用 
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
 	cout << "步数：" << count << endl;
	return 0;
}

//--------------------------------
//x = 6
//6---->3---->10---->5---->16---->8---->4---->2---->1
//步数：8
//--------------------------------
