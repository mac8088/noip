#include<cstdio>
using namespace std;
int main()
{
	int a, b, c;
	scanf("%d%d%d",&a,&b,&c);
	for(int i=2; i<=a; i++)			//ѭ��Ѱ������������x����Сֵ 
	{
		if(a%i==b%i && b%i==c%i)	//�����������1����������������������ͬ 
		{
			printf("%d", i);
			return 0;
		}
	}
	return 0;
}

//--------------------------------
//Сѧ����7647 
//300 262 205
//19
//--------------------------------
