#include<iostream>
using namespace std;
int main()
{
	int a, b, n, t;
	cin >> a >> b >> n;
	for(int i=1;i<=n;i++)	//循环计算分数a/b化为小数后，小数点后第n位的数字 
	{
		a*=10;				//模拟除法竖式计算 
		t=a/b;				//t存储分数a/b化为小数后，小数点后第i位的数字。 
		a%=b;	
	}
	cout << t << endl;
	return 0;
}

//--------------------------------
//1 2 
//5
//--------------------------------
