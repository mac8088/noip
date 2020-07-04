#include<iostream>
using namespace std;
int main()
{
	int a, b, c, x, y;		//a,b,c分别表示在买笔方案中，6元，5元，4元笔的数目。 
	cin >> x;				//x和y分别表示剩余的班费和买完最多4元笔后剩下的钱。 
	c = x / 4;
	y = x % 4;
	switch(y)				//购买方案 
	{
		case 0: a = 0; b = 0; break;
		case 1: a = 0; b = 1; c--; break;
		case 2: a = 1; b = 0; c--; break;
		case 3: a = 1; b = 1; c-=2; break;
	} 
	cout << a << ' ' << b << ' ' << c << endl;		//三个数之间用空格间隔 
	return 0; 
}

/*
要求：要买尽量多的笔；要把钱花完！ 
*/
