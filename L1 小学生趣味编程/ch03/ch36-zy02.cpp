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
	if(m==num) cout << "是回文数，经过次数：" << count << endl; 
	else cout << "不是回文数，经过次数：" << count << endl;
	return 0;
}

