#include <iostream>
using namespace std;
/*
 第43课，最大公约数 
 --作业02，求最大公约数的另外一种算法  
 幼儿园中班有36个小朋友，小班你有30个小朋友。
 按班分组，两个班各组的人数一样多，问每组最多有多少个小朋友？ 
*/ 
int main()
{
	int x, y, n, temp; 
	cin >> x >> y;   //fill 1
	if(x > y)
	{
		temp = x;
		x = y;
		y = temp;
	}
	n = x;    //30
	while(y % n != 0 || x % n != 0) //fill 2
	{
		n--;
	}

	cout << "每组的人数最多为：" << n << endl;	
	int a;

	return 0;
}
//--------------------------------
//36 30
//每组的人数最多为：6
//--------------------------------
