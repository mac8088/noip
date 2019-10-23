#include <iostream>
using namespace std;
/*
 第62课，捉迷藏 
  --数组越界 
*/ 
int main()
{
	bool a[11];
	int i, cishu;
	for(i=1;i<=10;i++) 
		a[i] = true;
	
	i = 10;
	a[i] = false;
	cishu = 1;
	
	while(cishu<=1000)
	{
		i=(i+cishu)%10;
		if(i==0) i=10;
		a[i] = false;
		cishu++;
	}
	
	for(i=1;i<=10;i++)
	{
		if(a[i]) cout << i << endl;
	}
	return 0;
}

//--------------------------------
//2
//4
//7
//9
//--------------------------------
