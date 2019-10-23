#include <iostream>
#include <string> 
using namespace std;
/*
 第66课，凯撒加密术 
 --字符串的输入和输出 
*/ 
int main()
{
	char s;
	string str1, str2;
	getline(cin, str1);
	int i;
	str2 = "";
	for(i=0;i<str1.size();i++)
	{
		s = str1[i];
		if(s>='a'&&s<='z' || s>='A' && s<='Z')
		{
			s++;
			if(s > 'Z' && s < 'a' || s >'z')  //when s in [91 ~ 96] or s > 122
				s-=26;
		}
		str2+=s;
	}
	cout << str2;
	return 0;
}

//--------------------------------
//Nike is excellent!
//Ojlf jt fydfmmfou!
//--------------------------------
