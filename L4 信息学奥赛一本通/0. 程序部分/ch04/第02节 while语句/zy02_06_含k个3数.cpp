#include<iostream>
using namespace std;
int main()
{
	int m, k, n, t, s=0;
	cin >> m >> k;
	n = m;						//用n保存m的值，进行分离，m用于判断是否能被19整除 
	while(n!=0)
	{
		t = n%10;				//从低位向高位分离各个位 
		if(t==3) s++;			//若是3，计数器s累加 
		n/=10;					//整除10，相当于删除个位 
	}
	if(m%19==0 && s==k) cout << "YES" << endl;		//判断m能否被19整除，并且恰好是k个3 
	else cout << "NO" << endl;
	return 0;
}

//--------------------------------
//43833 3
//YES
//--------------------------------
