#include <iostream>
using namespace std;
/*
 第42课，最小公倍数 
 枚举算法 
 尼克参加了多次信息学比赛，在最近一次比赛时发现，
 如果这次比赛他得了98分，那么他所有比赛的平均分是92分；
 如果这次比赛他得了78分，他的平均分是87分。
 问尼克共参加了多少次比赛？ 
*/ 
int main()
{
	int x;
	x = 2;
	while(92*x-98 != 87*x - 78)
	{
		x++;
	}
	cout << x << endl;	
	return 0;
}

//4
//--------------------------------
//Process exited after 7.842 seconds with return value 0

