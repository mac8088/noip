#include <iostream>
using namespace std;
/*
 第41课，蜗牛与葡萄树 
 --死循环 
 一般情况下，应该避免死循环；但是在实际应用中，有时候也需要用到死循环。
 另外，任何编译器都不会做的死循环的检查。 
*/ 
int main()
{
	int i, t;
	t = i = 0;   //先把0赋值给i，再把i赋值给t。 
	while(1)     //while(1)，它的值永远为true，如果循环体内没有break语句，就是死循环！ 
	{
		t++;
		i+=3;
		if(i>=17) break;
		t++;
		i--;	
	}
	cout << "需要 " << t << " 分钟" << endl;	
	return 0;
}

//---------------输出----------------------- 
//需要 15 分钟
//
//--------------------------------
//Process exited after 5.772 seconds with return value 0
