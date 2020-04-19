#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
char s[32];
int main()
{
	scanf("%s", s);  // not need & for string when scanf
	int l = strlen(s);
	if(strcmp(&s[l-3], "ing") == 0) s[l-3] = '\0';  // strcmp need cstring, see YBT: P102
	if(strcmp(&s[l-2], "er") == 0 || strcmp(&s[l-2], "ly") == 0) s[l-2] = '\0'; 
	puts(s);        // use puts to output the char array.
	return 0;
}
