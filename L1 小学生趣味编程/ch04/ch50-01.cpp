#include <iostream>
#include <cmath>
using namespace std;
/*
 ��51�Σ�������Ϸ 
 --ģ�ⷨ 
*/ 
int main()
{
	int time, count, teacher, nike, glair;
	bool flag;
	
	//��ʼ��
	time = 0;
	count = 1;
	teacher = nike = glair = 0;
	
	do{
		flag = 0;
		time++;
		
		//ÿ1����һ��, ���� teacher = 9 
		if(teacher < 9)
		{
			teacher++;
			flag = 1;
		}
		
		//ÿ2����һ�� 
		if(nike<9 && time%2==0)
		{
			nike++;
			flag = 1;
		}
		
		//ÿ4����һ�� 
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
