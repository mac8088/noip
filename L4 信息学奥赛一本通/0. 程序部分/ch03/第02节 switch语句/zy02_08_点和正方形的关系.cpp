#include<cstdio>
using namespace std;
int main()
{
	int x,y;
	scanf("%d%d", &x, &y);
	if(x>=-1 && x<=1 && y>=-1 && y<=1) printf("yes");
	else printf("no");
	return 0; 
}

//--------------------------------
//	if(x>=-1 && x<=1)
//		if(y>=-1 && y<=1) printf("yes");
//描述
//有一个正方形，四个角的坐标（x,y)分别是（1，-1），（1，1），（-1，-1），（-1，1），x是横轴，y是纵轴。
//写一个程序，判断一个给定的点是否在这个正方形内（包括正方形边界）。
//
//输入
//输入一行，包括两个整数x、y，以一个空格分开，表示坐标(x,y)。
//输出
//输出一行，如果点在正方形内，则输出yes，否则输出no。
//样例输入
//1 1
//样例输出
//yes
//--------------------------------
