#include<cstdio>
using namespace std;
int main()
{
	int n;
	double s, t;
	s = 0;
	scanf("%d", &n);			//������������������n��ʾ
	for(int i=1; i<=n; i++) 	//ѭ���ۼ����鸡���� 
	{
		scanf("%lf", &t);
		s+=t;
	}
	printf("%.4lf\n", s/n);		//����������ľ�ֵ����ȷС�������λ 
	return 0;
}

//--------------------------------
//2
//1.0 3.0
//2.0000
//--------------------------------
