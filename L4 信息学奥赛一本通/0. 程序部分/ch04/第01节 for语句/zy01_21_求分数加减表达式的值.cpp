#include<cstdio>
using namespace std;
int main()
{
	int n;
	double s = 0;		//s�洢���ʽ��ֵ����ʼֵΪ0 
	scanf("%d", &n);
	for(int i=1; i<=n; i++)		//ѭ��������ʽ��ֵ 
	{
		if(i%2==0) s-=1.0/i;	//�ۼ�n=iʱ���ʽ��ֵ����+ż- 
		else s+=1.0/i;
	}
	printf("%.4lf\n", s);
	return 0;
}

//--------------------------------
//2
//0.5000
//--------------------------------
