#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

//高精除了低精。输入两个正整数，求他们的商（做整除） 
int main()
{
	char a1[100];
	int a[100], c[100], lena, i, x=0, lenc, b;
	memset(a, 0, sizeof(a));
	memset(c, 0, sizeof(c));
	gets(a1);
	cin >> b;
	lena = strlen(a1);
	for(i=0;i<=lena-1;i++) 
		a[i+1] = a1[i]-48;  //把字符串变成数组[数字] 
	for(i=1; i<=lena; i++) //按位相除 
	{
		c[i]=(x*10+a[i])/b;  //存商对应的位[0~9] 
		x=(x*10+a[i])%b;  // 存余数， 连接以后的若干位得到新的被除数 
	}
	lenc=1;
	while(c[lenc]==0 && lenc<lena) 
		lenc++;  // 删掉前导0 
	for(i=lenc;i<=lena;i++)
		cout << c[i];
	cout << endl;
	return 0;
}
