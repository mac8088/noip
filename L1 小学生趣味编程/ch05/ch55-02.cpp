#include <iostream>
#include <iomanip>
using namespace std;
/*
 第55课，图形的窍门 
  双重循环的应用 
*/ 
int main()
{
	int i,j;
	for(i=1;i<=5;i++) 
	{
		cout << setw(41-i) << ' ';
		for(j=1;j<=i*2-1;j++)         //j<=i*2-1 控制每行输出的*的数量 
		{
			cout << "*";
		}
		cout << endl;	
	}
	return 0;
}

//--------------------------------
//     *
//    ***
//   *****
//  *******
// *********
//--------------------------------
