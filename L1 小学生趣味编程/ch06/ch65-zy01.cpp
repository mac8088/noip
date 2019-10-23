#include <iostream>
#include <string>
using namespace std;
/*
 第65课，采访报道 
 --字符数组的输入和输出 
 作业02 
*/ 
int main()
{
	char str[20];
	cin >> str;
	cout << str;
	string str1 = "8";
	string str2 = "10+2";
	bool flag = (str1 < str2);
	cout << endl;
	cout << flag << endl;
	char greeting1[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
	char greeting2[] = "Hello";
	cout << greeting1 << endl;
	cout << greeting2 << endl;
	return 0;
}

//--------------------------------
//how are you
//how
//--------------------------------
