#include<cstdio>
using namespace std;
int main()
{
	double a, b, r;
	scanf("%lf%lf", &a, &b);
	int k = a/b;
	r = a - k * b; //a=k*b+r
	printf("%g",r); 
	return 0; 
}

//--------------------------------
//注意：输出时小数尾部没有多余的0，可以用下面这种格式：
//double x;
//x = 1.33;
//printf("%g", x);
//73.263 0.9973
//0.4601
//--------------------------------
