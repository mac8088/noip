#include<cstdio>
using namespace std;
int main()
{
	double x, n;
	scanf("%lf%lf", &x, &n);			//���������˿�x������n
	for(int i=1; i<=n; i++)				//ѭ������n�����˿��� 
	{
		x*=1.001; 						//x�洢��i��Ϊֹ���˿��� 
	}
	printf("%.4lf\n", x);
	return 0;
}

//--------------------------------
//13 10
//13.1306
//--------------------------------
