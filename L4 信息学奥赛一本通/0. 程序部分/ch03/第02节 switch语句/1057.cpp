#include<iostream>
using namespace std;
int main()
{
	int a,b,c;
	char d;
	cin>>a>>b>>d;
	if(b==0&&d=='/') cout<<"Divided by zero!";
	else if(d=='+'||d=='-'||d=='*'||d=='/')
	{
		switch(d)
		{
			case '+':c=a+b;break;
			case '-':c=a-b;break;
			case '*':c=a*b;break;
			case '/':c=a/b;break;
		}
		cout<<c;
	}
	else if((d!='+')||(d!='-')||(d!='*')||(d!='/')) cout<<"Invalid operator!";
	return 0;
}