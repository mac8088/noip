#include<cstdio>
#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	scanf("%d%d%d", &a,&b,&c);
	if(a>=b && a>=c) printf("%d", a); 
	else if(b>=a && b>=c) printf("%d", b); 
	else printf("%d", c); 
	return 0; 
}

//--------------------------------
//	int max = a;
//	if(max<b) max=b;
//	if(max<c) max=c;
//	printf("%d", max); 
//����
//������������,�����������
//
//����
//����Ϊһ�У���������������������֮����һ���ո�ֿ���
//���
//���һ�У�����һ��������������������
//��������
//10 20 56
//�������
//56
//--------------------------------
