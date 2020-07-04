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
	printf("%d\n", n);                      //不完全正确！ 当输入100，输出是：1
	printf("%d%d%d\n", ge, shi, bai);       //彻底正确的！ 
	return 0; 
}

//--------------------------------
//358
//853
//--------------------------------
