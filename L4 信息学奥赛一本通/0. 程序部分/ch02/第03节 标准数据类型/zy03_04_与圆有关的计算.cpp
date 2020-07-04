#include<cstdio>
using namespace std;
const double PI = 3.14159; 
int main()
{
	double r;
	scanf("%lf", &r);
	printf("%.4lf %.4lf %.4lf", 2*r, 2*PI*r, PI*r*r);
	return 0; 
}

//--------------------------------
//利用求圆的周长和面积的公式 
//如果圆的半径是r，那么圆的直径、周长、面积分别是2*r、2 * pi * r、pi * r * r，其中约定pi＝3.14159。
//可以使用printf("%.4lf", ...)实现保留小数点后4位。
//3.0
//6.0000 18.8495 28.2743
//--------------------------------
