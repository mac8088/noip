#include <iostream>
using namespace std;
/*
 第65课，采访报道 
 --字符数组的输入和输出 
*/ 
int main()
{
	char str[2000];
	int i, num, numa;
	num = numa = 0;
	cout << "请输入一段英文：";
	gets(str);
	for(int i=0; str[i]!='\0';i++)
	{
		num++;
		if(str[i]=='.')
			numa++;
	}
	
	puts(str);
	cout << "字符个数：" << num << endl;	
	cout << " .的个数：" << numa << endl;	
	return 0;
}

//--------------------------------
//请输入一段英文：Glair is an export programmer.
//Glair is an export programmer.
//字符个数：30
// .的个数：1
//--------------------------------
