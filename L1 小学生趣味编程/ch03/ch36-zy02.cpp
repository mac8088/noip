#include <iostream>
using namespace std;
int main()
{
	int i,num,n,m;
	cin>>num;
	m=0;
	int count;
	for(n=num;n>0;n=n/10)
	{
		m = m*10+n%10;
		count++;
	}
	if(m==num) cout << "�ǻ�����������������" << count << endl; 
	else cout << "���ǻ�����������������" << count << endl;
	return 0;
}

