#include <cstdio>
#include <cstdlib>
#define maxn 20
using namespace std;
char c[256];
bool judge(char c[256])
{
	int top = 0, i = 0;
	while(c[i]!='@')
	{
		if(c[i]=='(') top++;
		if(c[i]==')') 
		{
			if(top>0) top--;
			else return 0;  // occurs underflow
		}
		i++;
	}
	// check stack whether empty?  
	if(top!=0) return 0;    // not empty means: have unmatched brackets
	else return 1;  
}
int main()
{
	scanf("%s",c);
	if(judge(c)) printf("YES");
	else printf("NO");
	return 0;
}

//2*(x+y)/(1-x)@
//YES

//(25+x)*(a*(a+b+b)@
//NO