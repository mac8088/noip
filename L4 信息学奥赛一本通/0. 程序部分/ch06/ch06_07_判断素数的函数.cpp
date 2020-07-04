#include <cstdio>
#include <cmath>
int prime(int x);
int main()
{
	int n;
	scanf("%d", &n);
	if(prime(n))
		printf("%s\n", "yes");
	else
		printf("%s\n", "no");
	return 0; 
}

//������������������i�����������Ķ��壺
//���Ǵ�2��ʼ����sqrt(i),��i�ĵ�һ��Լ�������ҵ���һ��Լ������i��Ȼ���������� 
int prime(int x)
{
	int j;
	if(x==2) return 1;
	j = 2;
	while(j<=sqrt(x) && x%j!=0) 
		j++;
	if(x%j==0) return 0;
	else return 1;
}
