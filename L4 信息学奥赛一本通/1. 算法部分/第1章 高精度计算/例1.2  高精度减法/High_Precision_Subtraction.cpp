#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
int main()
{
	int a[256], b[256], c[256], lena, lenb, lenc, i;
	char n[256], n1[256], n2[256];
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	memset(c, 0, sizeof(c));
	printf("Input minuend: ", gets(n1));	// ���뱻���� 
	printf("Input subtrahend: ", gets(n2));	// �������
	// strcmp Ϊ�ַ����ȽϺ��� 
	if(strlen(n1) < strlen(n2) || strlen(n1) == strlen(n2) && strcmp(n1, n2) < 0) 
	{
		strcpy(n,  n1);
		strcpy(n1, n2);
		strcpy(n2, n);
		cout << "-";	// �����˼����ͱ����������Ϊ���� 
	}
	lena = strlen(n1); lenb = strlen(n2);
	// ����������a���飬��������b���� 
	for(i=0; i <= lena-1; i++) a[lena-i] = int(n1[i] - '0');
	for(i=0; i <= lenb-1; i++) b[lenb-i] = int(n2[i] - '0');
	i = 1;
	while(i <= lena || i <= lenb)
	{
		if(a[i] < b[i])
		{
			a[i] += 10;	// ��������ô���λ��1��10 
			a[i+1]--;
		}
		c[i] = a[i] - b[i];  //��Ӧλ��� 
		i++;
	}
	lenc = i;
	while(c[lenc] ==0 && lenc > 1) lenc--;	// ���λ��0����� 
	for(i = lenc; i>=1; i--) cout << c[i];	// ���������� 
	cout << endl;
	return 0;
}
