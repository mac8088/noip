#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	char c = 'B';					//定义字符变量c并且赋值'B' 
	putchar(c);						//输出该变量 
	putchar('\x42');				//用转义字符输出字母'B' 
	putchar(0x42);					//用16进制ascii码输出字母'B' 
	putchar(66);					//用10进制ascii吗输出 
	return 0; 
}

//--------------------------------
//BBBB
//--------------------------------
