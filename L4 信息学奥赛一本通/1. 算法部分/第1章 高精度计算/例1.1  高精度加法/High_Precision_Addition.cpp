#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
int main()
{
	char a1[100], b1[100];
	int a[100], b[100], c[100], lena, lenb, lenc, i, x;
	memset(a, 0, sizeof(a));
	memset(b, 0, sizeof(b));
	memset(c, 0, sizeof(c));
	// 输入加数和被加数 
	gets(a1);
	gets(b1);
	lena = strlen(a1);
	lenb = strlen(b1);
	// 加数放入a数组，被加数放入b数组 
	for(int i = 0; i <= lena - 1; i++) a[lena - i] = a1[i] - 48;
	for(int i = 0; i <= lenb - 1; i++) b[lenb - i] = b1[i] - 48;
	lenc = 1;
	x = 0;
	while(lenc <= lena || lenc <= lenb) 
	{
		c[lenc] = a[lenc] + b[lenc] + x;  // 两数相加
		x = c[lenc] /10;  // 进位值
		c[lenc]%=10;      // 存储值
		lenc++; 
	}
	c[lenc] = x;
	if(c[lenc] == 0) lenc--;	// 处理最高位 
	for(i=lenc; i>=1; i--) cout << c[i];  // 倒着输出结果 
	cout << endl;
	return 0;
}
