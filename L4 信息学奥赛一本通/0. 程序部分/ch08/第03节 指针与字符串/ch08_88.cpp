#include <cstdio>
#include <cstring>
using namespace std;
void swapp(char &a, char &b)
{
	char t;
	t=a;
	a=b;
	b=t;	
}
void work(char *str)
{
	int len=strlen(str);
	for(int i=0; i<=len/2;++i)
		swapp(str[i], str[len-i-1]);
}
int main()
{
	char s[110];
	char *str = s;
	gets(s);
	work(str);
	printf("%s", s);
	return 0;
}

//!anihC evoL I
//I Love China!