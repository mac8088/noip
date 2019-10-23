#include <iostream>
using namespace std;
/*
 第41课，蜗牛与葡萄树 
 --死循环 
*/ 
int main()
{
	int i = 10, n;
	cin >> n;
	while(true)    //相对于： while(1) 
	{
		cout << i;
		if(i<=n) break; 
		i-=3;
	}
	return 0;
}

//若输入是： 
//5
//1074
//--------------------------------
//Process exited after 7.317 seconds with return value 0
