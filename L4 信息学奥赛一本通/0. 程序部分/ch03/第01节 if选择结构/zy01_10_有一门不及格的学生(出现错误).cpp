#include<cstdio>
using namespace std;
int main()
{
	long a, b;
	scanf("%ld%ld", &a, &b);
	//ǡ��һ�Ų�����ģ����� 
	if(a<60 && b>=60 || b<60 && a>=60) printf("1");
	else printf("0");
	return 0; 
}

//--------------------------------

//--------------------------------
