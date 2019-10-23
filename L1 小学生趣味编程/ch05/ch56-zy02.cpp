#include <iostream>
#include <iomanip>
using namespace std;
/*
 第56课，九九乘法表 
 双重循环的应用 
 作业02, 完善程序，求数：9/99，在1/1，1/2，2/2，.....中排在第几位？ 
*/ 
int main()
{
	int i,j,ans;
	ans=0;
	for(i=1;i<=99;i++) 
		for(j=1;j<=i;j++)
		{
			ans++;
			if(i==99&&j==9) break;
		}
	cout << ans << endl;	
	return 0;
}

//--------------------------------
//4860
//--------------------------------
