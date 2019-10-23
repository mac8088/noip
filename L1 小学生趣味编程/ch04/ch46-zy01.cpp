#include <iostream>
using namespace std;
/*
 第46课，精益求精 
 --分数转小数 
 作业： 阅读程序写结果 
*/ 
int main()
{
	int a, b, n, num = 0;
	cin >> a >> b >> n;
	while(a<=b)
	{
		if(a%n==0) num++;
		a++;
		b-=10;
	}
	cout << num << endl;	
	return 0;
}

//--------------------------------
//1 100 5
//2
//--------------------------------
