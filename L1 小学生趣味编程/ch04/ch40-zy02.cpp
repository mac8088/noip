#include <iostream>
using namespace std;
/*
 第40课， 儿歌《打老虎 》 
 作业02 求出 6+12+18+24+...+180的和 
 小朋友，如果让你自己让笔算那得多么地费时啊
 当然了，你也可以用等差数列的公式：
 求项数公式：（末项 - 首项 ）÷ 公差 + 1 
 求和公式：（首项 + 末项 ）×项数 ÷ 2 
 但是你的速度一定比不上计算机！ 
*/ 
int main()
{
	int i = 6, sum = 0;
	while(i<=180){
		sum += i;
		i+=6;
	}
	cout << "sum=" << sum << endl;	
	return 0;
}

//sum=2790
//
//--------------------------------
//Process exited after 1.39 seconds with return value 0
