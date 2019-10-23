#include <iostream>
using namespace std;
/*
 第65课，采访报道 
 --字符数组的输入和输出 
 作业02 
*/ 
int main()
{
	char ch1[1000], ch2;
	int num[26], i, k;
	for(i=0; i<26; i++)
		num[i] = 0;
		
	gets(ch1);
	i=0;
	while(ch1[i] != '\0')
	{
		if(ch1[i] >= 'a' && ch1[i] <='z')
		{
			k = ch1[i] - 'a';
			num[k]++;
		}
		i++;
	}
	
	for(i=0;i<26;i++)
	{
		ch2 = 'a' + i;
		cout << ch2 << ':' << num[i] << " ";
		if(i%5==4) cout << endl;
	}
	return 0;
}

//--------------------------------
//dfdsfsadfsfdsfdsfadsfsadf
//a:3 b:0 c:0 d:7 e:0
//f:8 g:0 h:0 i:0 j:0
//k:0 l:0 m:0 n:0 o:0
//p:0 q:0 r:0 s:7 t:0
//u:0 v:0 w:0 x:0 y:0
//z:0
//--------------------------------
