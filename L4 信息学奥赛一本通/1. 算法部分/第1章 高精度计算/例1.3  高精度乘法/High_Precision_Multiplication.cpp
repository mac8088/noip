#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
int main()
{
	char a1[101], b1[101];
	int a[101], b[101], c[10001], lena, lenb, lenc, i, j, x;
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	memset(c, 0, sizeof(c));
	scanf("%s", a1);
	scanf("%s", b1);
	lena = strlen(a1); 	lenb = strlen(b1); 
	for(i=0; i<=lena-1; i++) a[lena-i]=a1[i]-48;
	for(i=0; i<=lenb-1; i++) b[lenb-i]=b1[i]-48;
	for(i=1; i<=lena; i++)
	{
		x=0;  // 用于存放进位 
		for(j=1; j<=lenb; j++)  //对乘积的每一位进行处理 
		{
			c[i+j-1]=a[i]*b[j]+x+c[i+j-1];  // 当前乘积 + 上次乘积进位 + 原数
			x=c[i+j-1]/10;
			c[i+j-1]%=10; 
		}
		c[i+lenb]=x;  // 进位 
	}
	lenc=lena+lenb;
	while(c[lenc]==0 && lenc>1)  // 删掉前导0 
		lenc--;
	for(i=lenc; i>=1; i--)
		cout << c[i];
	cout << endl;
	return 0;
}
