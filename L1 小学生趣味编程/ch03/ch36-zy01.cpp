#include <iostream>
using namespace std;
int main()
{
	int i,num,n,m;
	cin>>num;
	m=0;
	n=num;
	for(;n>0;)
	{
		m = m*10 + n%10;
		n = n/10;
	}
	if(m==num) cout << "�ǻ�����" <<  endl; 
	else cout << "���ǻ�����" <<endl;
	return 0;
}

