#include <iostream>
#include <cstdio>

const int MaxLen=1e5+10; //100000
char s[MaxLen], ch;

char * findChar(char *p, char ch)
{
	while(*p != ch && *p != '\0')
		++p;
	if(*p==ch) 
		return p;
	else 
		return NULL;
}

int main()
{
	scanf("%s\n", &s); // &s or s, both of them are OK, here must have \n
	ch = getchar();
	char *ans = findChar(s, ch);
	if(ans != NULL)
		printf("%d\n", ans-s+1);
	else printf("no");
	return 0;
	
}