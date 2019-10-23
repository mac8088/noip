#include <iostream>
using namespace std;
int main()
{
	int i;
	for(i=1;i<=200;i++)
		if(i%3==2&&i%7==1) 
			cout<< i << ' '; 
	return 0;
}

//8 29 50 71 92 113 134 155 176 197
