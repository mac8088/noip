#include<iostream>
using namespace std;
int main()
{
	int a,b,c;								//������������ 
	cout<<"Input a,b=";						//��ʾInput a,b=
	cin>>a>>b;								//����a��b��ֵ 
	c=a; a=b; b=c;							//������ʱ����c������a��b��ֵ 
	cout<<"a="<<a<<" b="<<b<<endl;
	return 0; 
}
