#include<cstdio>
using namespace std;
int main()
{
	int n, m, s = 0;			//s�洢��������������������ʼֵΪ0 
	int qian, bai, shi, ge;
	scanf("%d", &n);			//�����������Ĵ�С 
	for(int i=1; i<=n; i++)
	{
		scanf("%d", &m);		//ѭ������һ����λ�� m
		qian = m /1000;
		bai = (m/100)%10;
		shi = (m/10) %10;
		ge = m%10;
		if(ge - qian - bai - shi > 0) s++; //����������s�ۼ� 
	}
	printf("%d\n", s);
	return 0;
}

//--------------------------------
//5
//1234 1349 6119 2123 5017
//3
//--------------------------------
