#include<cstdio>
using namespace std;
int main()
{
	long n, t, max = -1000000;				//max�洢�˿�����ȡ����߳ɼ�����ʼֵ��-1000000 
	scanf("%ld", &n);						//��������				
	for(int i=1; i<=n; i++)					//�������гɼ����ҵ���߷��� 
	{
		scanf("%ld", &t);
		if(t>max) max=t; 
	}
	printf("%ld\n", max);
	return 0;
}

//--------------------------------
//5
//85 78 90 99 60
//99
//--------------------------------
