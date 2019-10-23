#include <iostream>
#include <string> 
using namespace std;
/*
 第66课，凯撒加密术 
 --字符串的输入和输出 
 作业01 
*/ 
int main()
{
	string str;
	int i, ans;
	i=0;
	ans=1;
	getline(cin,str);
	while(i<str.size()) 
	{
		if(i>0)
			if(str[i]==32 && str[i-1]!=32)
				ans++;
		i++;
	}
	cout << ans << endl;
	return 0;
}

//--------------------------------
//Nike is excellent!
//Ojlf jt fydfmmfou!
//--------------------------------
