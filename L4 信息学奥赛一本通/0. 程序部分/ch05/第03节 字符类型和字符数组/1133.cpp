#include <cstdio>
#include <cstring>
using namespace std;
char a[101];
int main()
{
	gets(a);  //gets read one entry line.
	int l = strlen(a);  //strlen need cstring header!
	for(int i=0; i<=l-2; i++)  // from 0 to i-2
		printf("%c", a[i] + a[i+1]);
	printf("%c", a[l-1] + a[0]);  // i-1 means: the last one
	return 0;
}
