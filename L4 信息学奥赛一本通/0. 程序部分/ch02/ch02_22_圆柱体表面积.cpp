#include<iostream>
using namespace std;
int main()
{
	const double pi=3.1415926;			//定义pi为双精度实数变量 
	double r,h,s1,s2,s;					//定义双精度实数
	scanf("%lf%lf",&r,&h);				//r和h前面的&符号不能漏掉，double类型用%lf 
	s1=pi*r*r;							//计算底面积 
	s2=2*pi*r*h;						//计算侧面积 
	s=2*s1+s2;							//计算总的表面积 
	printf("Area=%.3lf\n",s);			//格式化输出，保留三位小数，注意用lf格式 
	return 0;
}

//--------------------------------
//3.5 9
//Area=274.889
//--------------------------------
