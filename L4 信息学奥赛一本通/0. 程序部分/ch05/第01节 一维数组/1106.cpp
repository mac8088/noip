#include <cstdio>
#include <iostream>
using namespace std;

int main()
{
	int size;
	cin >> size;
	int n[size] = {0};
	for (int i=0; i<size; i++)
		scanf("%d", &n[i]);
	int levels[4] = {0};
	for (int i=0; i<size; i++)
	{
		if(n[i] >=0  && n[i] <=18) levels[0]++;
		if(n[i] >=19 && n[i] <=35) levels[1]++;
		if(n[i] >=36 && n[i] <=60) levels[2]++;
		if(n[i] >=61) levels[3]++;
	}
	for (int i=0; i<4; i++)	
		printf("%.2f%% \n", levels[i]*1.0/size*100);	
	return 0;
}
