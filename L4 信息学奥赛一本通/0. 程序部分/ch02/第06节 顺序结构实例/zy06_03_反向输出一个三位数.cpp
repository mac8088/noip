#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n, bai,shi,ge;
	scanf("%d", &n);
	ge = n % 10;
	shi = (n/10) % 10;
	bai = n / 100;
	n = ge * 100 + shi * 10 + bai;
	printf("%d\n", n);                      //����ȫ��ȷ�� ������100������ǣ�1
	printf("%d%d%d\n", ge, shi, bai);       //������ȷ�ģ� 
	return 0; 
}

//--------------------------------
//358
//853
//--------------------------------
