#include<cstdio>
using namespace std;
int main()
{
	int a, n, s = 1;		//s�洢�˷��Ľ������ʼ��Ϊ1 
	scanf("%d%d", &a, &n);  //����a��n�η�
	for(int i=1; i<=n; i++)	//ѭ���۳� 
	{
		s*=a;				//s�洢a��i�η� 
	}
	printf("%d\n", s);
	return 0;
}

//--------------------------------
2 3
8
//--------------------------------
