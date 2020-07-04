#include<iostream>
using namespace std;
int main()
{
	int i, j, n;
	cin >> n;
	for(i=1;i<=n;++i)				//外层循环控制行数 
	{
		for(j=1;j<=i;++j)			//内层循环控制*的个数 
			cout << "*"; 
		cout << endl;				//每行最后要换行 
	} 
	return 0;
}

//--------------------------------
//5
//*
//**
//***
//****
//*****
//--------------------------------
