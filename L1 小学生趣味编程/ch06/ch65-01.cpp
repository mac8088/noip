#include <iostream>
using namespace std;
/*
 ��65�Σ��ɷñ��� 
 --�ַ�������������� 
*/ 
int main()
{
	char str[2000];
	int i, num, numa;
	num = numa = 0;
	cout << "������һ��Ӣ�ģ�";
	gets(str);
	for(int i=0; str[i]!='\0';i++)
	{
		num++;
		if(str[i]=='.')
			numa++;
	}
	
	puts(str);
	cout << "�ַ�������" << num << endl;	
	cout << " .�ĸ�����" << numa << endl;	
	return 0;
}

//--------------------------------
//������һ��Ӣ�ģ�Glair is an export programmer.
//Glair is an export programmer.
//�ַ�������30
// .�ĸ�����1
//--------------------------------
