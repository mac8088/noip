#include<cstdio>						//使用printf 和 scanf 函数，需要调用cstdio库 
#include<iostream>						//使用cin,cout函数，需要调用iostream库 
using namespace std;
int main()
{
	int x,y;							//定义整型变量 
	scanf("%d", &x);					//或者使用 cin>>x;
	y=10*x;								//计算总票价 
	printf("%d %d\n",x,y);				//或者使用cout<<x<<" "<<y<<endl;  注意：两个%d之间是有一个空格！！ 
	return 0;
} 
