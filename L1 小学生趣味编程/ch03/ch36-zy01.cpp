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
	if(m==num) cout << "是回文数" <<  endl; 
	else cout << "不是回文数" <<endl;
	return 0;
}

