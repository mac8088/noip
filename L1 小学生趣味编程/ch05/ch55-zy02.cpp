#include <iostream>
#include <iomanip>
using namespace std;
/*
 第55课，图形的窍门 
  双重循环的应用 
  作业02 
*/ 
int main()
{
	int i,j,t=0;
	for(i=1;i<=4;i++) 
	{
		cout << setw(40);
		for(j=1;j<=i;j++)         //j<=i 控制每行输出的*的数量 
		{
			cout << t;
			t++;
		}
		cout << endl;
	}
	return 0;
}

//--------------------------------
//     0
//     12
//     345
//     6789
//--------------------------------
