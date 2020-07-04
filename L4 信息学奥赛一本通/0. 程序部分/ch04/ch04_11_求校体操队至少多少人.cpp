#include<iostream>
using namespace std;
int main()
{
	int x = 0;
	bool yes=true;
	do
	{
		yes = true; 
		x+=7;
		if(x%2!=1) yes=false;
		if(x%3!=1) yes=false;
		if(x%4!=1) yes=false;
		if(x%5!=1) yes=false;
		if(x%6!=1) yes=false;
	} while(yes==false);			//直到yes为真，退出循环 
	cout << "All=" << x;
	return 0;
}

//--------------------------------
//6
//all=301
//--------------------------------
