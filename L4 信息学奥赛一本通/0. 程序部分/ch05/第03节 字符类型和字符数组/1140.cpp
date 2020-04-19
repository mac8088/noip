#include <cstdio>
#include <cstdlib>
#include <cstring>
using namespace std;
char s1[200], s2[200];
int main()
{
	gets(s1); gets(s2);
	if(strstr(s2, s1))  //strstr check sub string
	{
		printf("%s is substring of %s\n", s1, s2);
		exit(0);      // see sctdlib
	}
	if(strstr(s1, s2))  //strstr check sub string
	{
		printf("%s is substring of %s\n", s2, s1);
		exit(0);
	}
	printf("No substring\n");
	return 0;
}
