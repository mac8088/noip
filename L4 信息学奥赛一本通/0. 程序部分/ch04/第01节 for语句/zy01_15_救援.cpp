#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	double a, b, s = 0, n, c, l;
	scanf("%lf", &n);
	for(int i=1;i<=n;++i)					//ѭ��ÿ������ 
	{
		scanf("%lf%lf%lf", &a, &b, &c);
		l = sqrt(1.0*(a*a) + 1.0*(b*b));
		s = s + 2 * l/50.0 + c* 1.5;		//s�ۼӾ�Ԯ������ʱ�� 
	}
	printf("%.0lf\n", ceil(s));
	return 0;
}

//--------------------------------
//1
//30 40 3
//7
//--------------------------------
