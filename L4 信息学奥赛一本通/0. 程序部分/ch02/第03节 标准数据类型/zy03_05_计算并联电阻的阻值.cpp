#include<cstdio>
using namespace std;
const double PI = 3.14159; 
int main()
{
	float f1, f2;
	scanf("%f%f", &f1, &f2);
	printf("%.2f", 1/(1/f1 + 1/f2));
	return 0; 
}

//--------------------------------
//输入
//两个电阻阻抗大小，浮点型，以一个空格分开。
//输出
//并联之后的阻抗大小，结果保留小数点后2位
//计算过程使用float类型
//1 2
//0.67
//--------------------------------
