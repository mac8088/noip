#include<cstdio>
using namespace std;
int main()
{
	int a1, a2, n;
	scanf("%d%d%d", &a1,&a2,&n);
	n = a1 + (n-1) * (a2-a1);
	printf("%d\n", n);
	return 0; 
}

//--------------------------------
//�Ȳ�����ͨ�ʽ������ + ������ - 1�� �� ���� 
//1 4 100
//298
//--------------------------------
