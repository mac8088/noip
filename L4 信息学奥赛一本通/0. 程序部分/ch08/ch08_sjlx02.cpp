#include<cstdio>
#include<cstring>
using namespace std;
const int MAXLEN=1e5+10;
int len;
char s[MAXLEN], *p;  // array name also is the first address
int main()
{	
	scanf("%s", s);  // no need with & for string
	len = strlen(s);
	p=s+len-1;       // let p point out the last element
//	do
//	{
//		putchar(*p);
//		--p;		// move the pointer to the previous element
//	}while(p>=s);
//	while(p>=s){
//		printf("%c", *p);
//		--p;
//	}
	for(p=s+len-1; p>=s; --p)
		printf("%c", *p);	
	return 0;
}

//ABCDEFGHIJK
//KJIHGFEDCBA