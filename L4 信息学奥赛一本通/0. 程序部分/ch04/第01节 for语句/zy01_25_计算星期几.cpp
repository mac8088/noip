#include<cstdio>
using namespace std;
int main()
{
	int a, b;
	scanf("%d%d",&a,&b);
	int n = 1;						//ʹn�ĳ�ʼֵΪ1 
	for(int i=1; i<=b; i++)
		n=n*a%7;					//ÿ�ζ�ȡ�����ֵ̫�� 
		
	switch(n)						//�������ڼ� 
	{
		case 0: printf("Sunday"); break;			//����û����������Ϊ������ 
		case 1: printf("Monday"); break;			//������һ����Ϊ����һ 
		case 2: printf("Tuesday"); break;			//�������� 
		case 3: printf("Wednesday"); break;
		case 4: printf("Thursday"); break;
		case 5: printf("Friday"); break;
		case 6: printf("Saturday"); break;
	}
	return 0;
}

//--------------------------------

//--------------------------------
