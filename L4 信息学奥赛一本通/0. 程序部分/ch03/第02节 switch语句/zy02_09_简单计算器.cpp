#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int a,b,n; char x;
	//scanf("%d %d %c", &a, &b, &x);
	cin >> a >> b >> x;
	if(b==0 && x=='/') 
		printf("Divided by zero!\n");
	else if(x=='+'|| x=='-' || x=='*' || x=='/') 
	{
		switch(x)
		{
			case '+': n = a + b; break;
			case '-': n = a - b; break;
			case '*': n = a * b; break;
			case '/': n = a / b; break;	
		}
		printf("%d", n); 
	}else if(x!='+'|| x!='-' || x!='*' || x!='/') 
		printf("Invalid operator!\n"); 

	return 0; 
}

//--------------------------------
// ����汾�������� 1 2 // 
//	switch(x)
//	{
//		case '+': n = a + b; printf("%d", n); break;
//		case '-': n = a - b; printf("%d", n); break;
//		case '*': n = a * b; printf("%d", n); break;
//		case '/': n = a / b; printf("%d", n); break;	
//		default: printf("Invalid operator!\n"); 
//	}
//-------------------------------
//����
//һ����򵥵ļ�������֧��+, -, *, / �������㡣���迼���������Ϊ��������������ݺ����������ᳬ��int��ʾ�ķ�Χ��
//
//����
//����ֻ��һ�У������������������е�1��2������Ϊ��������3������Ϊ��������+,-,*,/����
//���
//���ֻ��һ�У�һ��������Ϊ��������Ȼ����
//1. ������ֳ���Ϊ0��������������Divided by zero!
//2. ���������Ч�Ĳ�����(����Ϊ +, -, *, / ֮һ�����������Invalid operator!
//��������
//1 2 +
//�������
//3
//--------------------------------
