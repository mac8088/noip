#include <iostream>
using namespace std;
/*
 第47课，称心如意的输入
 --do while 语句 
 作业01： 阅读程序写结果  
*/ 
int main()
{
	int i = 1, n, ans = 0;
	cin >> n;
	do
	{
		ans +=i;
		i+=2;
	} while(i<=n);
	cout << ans;
	return 0;
}

//--------------------------------
//10
//25
//--------------------------------
