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
//ע�⣺���ʱС��β��û�ж����0���������������ָ�ʽ��
//double x;
//x = 1.33;
//printf("%g", x);
//73.263 0.9973
//0.4601
//--------------------------------
