#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	char c = 'B';					//�����ַ�����c���Ҹ�ֵ'B' 
	putchar(c);						//����ñ��� 
	putchar('\x42');				//��ת���ַ������ĸ'B' 
	putchar(0x42);					//��16����ascii�������ĸ'B' 
	putchar(66);					//��10����ascii����� 
	return 0; 
}

//--------------------------------
//BBBB
//--------------------------------
