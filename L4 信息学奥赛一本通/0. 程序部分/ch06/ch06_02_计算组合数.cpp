#include <cstdio>
using namespace std;
//�׳˺��������� 
int fac(int x);
//����ļ��㷽����C(m,n)=m!/((m-n)! * n!) 
int main()
{
	int m, n;
	scanf("%d%d", &m, &n);
	printf("%d", fac(m) / (fac(m-n) * fac(n)));  //�׳˺����ĵ��� 
} 
int fac(int x)
{
	int s = 1;
	for (int i=1; i<=x; i++)
		s *= i;
	return s;
}
