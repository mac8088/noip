#include <cstdio>
#include <cstring>

#define MAXN 100+10
int a[MAXN];

int main()
{
	int n, first = 1;
	memset(a, 0, sizeof(a));  //����a����
	for (int i=1; i<=100; ++i)  //��1��ѭ��ģ��100���� 
		for (int j=1; j<=100; ++j)  //��2��ѭ��ģ��100����
			if (j%i == 0) a[j] = !a[j];  //�෴���� 
	
	for (int i=1; i<=100; ++i)
		if (a[i])
		{
			//Ϊ�˱����������ո����ñ�Ǳ���first 
			if(first) first = 0; else printf(" ");
			printf("%d", i);	
		}
	return 0;	
} 
