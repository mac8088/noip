#include<cstdio>
using namespace std;
int main()
{
	int n = 1;
	double s =1, k;
	scanf("%lf", &k);
	while(s<=k)				//when Sn > k ������û�д�ɱ����ѭ�� 
	{
		++n;				//�ۼ�n��ֵ 
		s+=1.00/n;			//ʵ��������1.00 
	}
	printf("%d", n); 
	return 0;
}

//--------------------------------
//������ͣ� 
//1
//2
//--------------------------------
