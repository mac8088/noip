#include<iostream>
using namespace std;
int main()
{
	int a, b, k = 1;
	cin >> a >> b;
	for(int i=1; i<=b; i++)			//循环计算幂的末三位数字 
	{
		k=k*a;
		k=k%1000;					//k存储幂ai的后三位数 
	}
	
	if(k>=100) cout << k;
	else if(k>=10) cout << "0" << k;	//处理幂本身不足三位的情况 
	else cout << "00" << k;
	return 0;
}

//--------------------------------
//7 2011
//743
//--------------------------------
