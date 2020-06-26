#include <cstdio>
#include <cstdlib>
#include <string>
#include <cstring>
using namespace std;
int stack[101];
char s[256];
int comp(char s[256])
{
	int i=0, top=0, x, y;
	while(i<=strlen(s)-2)
	{
		switch(s[i])
		{
			case '+': stack[--top]+=stack[top+1];break;
			case '-': stack[--top]-=stack[top+1];break;
			case '*': stack[--top]*=stack[top+1];break;
			case '/': stack[--top]/=stack[top+1];break;
			default: x=0; while(s[i] != ' ') x=x*10 + s[i++] - '0';
			stack[++top]=x; break;
		}
		i++;
	}
	return stack[top];
}
int main()
{
	printf("input a string(@_over)");
	gets(s);  // 从键盘读入一个后缀表达式
	printf("result = %d", comp(s));
	return 0;
}

//input a string(@_over)16 9 4 3 +*-@
//result = -47