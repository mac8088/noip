#include <iostream>
#include <cmath>
using namespace std;
/*
 第51课，拍手游戏 
 --模拟法 
*/ 
int main()
{
	int time, count, teacher, nike, glair;
	bool flag;
	
	//初始化
	time = 0;
	count = 1;
	teacher = nike = glair = 0;
	
	do{
		flag = 0;
		time++;
		
		//每1秒排一次, 截至 teacher = 9 
		if(teacher < 9)
		{
			teacher++;
			flag = 1;
		}
		
		//每2秒排一次 
		if(nike<9 && time%2==0)
		{
			nike++;
			flag = 1;
		}
		
		//每4秒排一次 
		if(glair<9 && time%4==0)
		{
			glair++;
			flag = 1;
		}
		
		if(flag==1) count++;
		
	} while (teacher + nike + glair < 9*3);
	cout << count << endl;
	return 0;
}

//--------------------------------
//20
//--------------------------------
