#include<cstdio>						//使用 printf 和 scanf 函数，需要调用cstdio库 
#include<cstdlib>						//使用system()调用 
using namespace std;					//在C语言中省略，比如：VC++ and TC++ 
int main()								//在有的C语言中可以用：void main() 
{										//整个程序的开始 
	float s,h,up,down;					//float定义了四个变量，均为单精度实型变量 
	up=15;								//输入上底,或者使用scanf(%f, &up); 
	down=25;							//输入下底,或者使用scanf(%f, &down); 
	h=2*150/up;							//根据上底求出梯形的高 
	s=(up+down)*h/2;					//根据梯形面积公式求出其面积 
	printf("s=%0.2f\n",s);				//\n是换行控制符， 0.2f按实际的外数输出，并且保留2位小数。 
	system("pause");					//暂停作用 
	return 0;							//结束程序 
}
