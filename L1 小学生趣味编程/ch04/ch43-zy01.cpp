#include <iostream>
using namespace std;
/*
 第43课，最大公约数 
 --作业01 
*/ 
int main()
{
	int x, y, temp, ans;
	cin >> x >> y;
	if(x < y)
	{
		temp = x;
		x = y;
		y = temp;
	 } 
	 
	 //after ensure x > y
	 while(x != y)
	 {
	 	x -= y;
	 	if(x < y)
	 	{
	 		temp = x;
	 		x = y;
	 		y = temp;
		}
	 }
	 ans = x;
	cout << ans << endl;	
	return 0;
}

//--------------------------------
//28 7
//7
//
//--------------------------------
//Process exited after 7.808 seconds with return value 0
