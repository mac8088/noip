#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	long long s = 1;				//NOIP2010��ʼ��C++����������long long 
	int n;							//n���ܶ���Ϊlong long ����for��������ѭ�� ??
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)		//��s����Ϊint����n=13ʱ��s��ֵ������� 
		s *= i;
	printf("%lld\n", s);			//�Ͱ汾ʹ�� %I64d 
	return 0;
}

//--------------------------------
//5
//120
//--------------------------------
