#include<cstdio>
using namespace std;
int main()
{
	long a, b, n;
	double x, y;
	scanf("%ld", &n);				//�����������ݴ�С 
	//�����һ�����ݣ�aΪ�ٴ�ʵ����ܲ�������bΪ�ڶ���Ч��Ч�Ĳ�����
	scanf("%ld%ld", &a, &b);
	x = b / (a/1.0);				//x�洢ԭ��β���Ʒ�����Ч�� 
	for(int i=2; i<=n;i++)
	{
		scanf("%ld%ld", &a, &b);
		y= b / (a/1.0);				//y�洢��i�ָĽ��Ʒ�����Ч��
		if(y-x>0.05) printf("better\n");
		else if(x-y>0.05) printf("worse\n");
		else printf("same\n");
	}
	return 0;
}

//--------------------------------
//5
//125 99
//112 89
//	same
//145 99
//	worse
//99 97
//	better
//123 98
//	same
//--------------------------------
