#include <cstdio>
using namespace std;
//阶乘函数的声明 
int fac(int x);
//经典的计算方法：C(m,n)=m!/((m-n)! * n!) 
int main()
{
	int m, n;
	scanf("%d%d", &m, &n);
	printf("%d", fac(m) / (fac(m-n) * fac(n)));  //阶乘函数的调用 
} 
int fac(int x)
{
	int s = 1;
	for (int i=1; i<=x; i++)
		s *= i;
	return s;
}
