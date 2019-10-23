#include <iostream>
using namespace std;
/*
 第55课，图形的窍门 
  双重循环的应用 
*/ 
int main()
{
	int i,j;
	char t = 'A';
	for(i=1;i<=3;i++) 
	{
		for(j=1;j<=i;j++)         //j<=i 控制每行输出的*的数量 
		{
			cout << t;
		}
		cout << endl;
		t++;
	}
	return 0;
}

//--------------------------------
//*
//**
//***
//****
//*****
//--------------------------------
