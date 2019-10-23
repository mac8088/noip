#include <iostream>
using namespace std;
/*
 第63课，老鹰捉小鸡 
  循环移位 
*/ 
int main()
{
	int i, j, a[6], n;
	
	//初始化值 
	for(i=1;i<6;i++)
		a[i] = i;
	
	//输出第一次的位置
	i=1;
	cout << i << ": " ;
	for(j=1;j<6;j++)
		cout << a[j] << " "; 
	cout << endl;
	
	for(i=2;i<=10;i++)
	{
		//移动位置
		for(j=0;j<=4;j++)
			a[j]=a[j+1];
		a[5]=a[0];

		//输出位置
		cout << i << ": ";
		for(j=1;j<=5;j++) 
			cout << a[j] << " "; 	
		cout << endl;
	}
	return 0;
}

//--------------------------------
//1: 1 2 3 4 5
//2: 2 3 4 5 1
//3: 3 4 5 1 2
//4: 4 5 1 2 3
//5: 5 1 2 3 4
//6: 1 2 3 4 5
//7: 2 3 4 5 1
//8: 3 4 5 1 2
//9: 4 5 1 2 3
//10: 5 1 2 3 4
//--------------------------------
