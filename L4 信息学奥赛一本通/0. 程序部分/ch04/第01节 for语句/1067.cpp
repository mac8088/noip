#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	//declare 
	int n, temp, count01=0, count05=0, count10=0;
	//input 
	cin >> n;
	//process inside for loop
	for(int i=1; i<=n; i++)
	{
		cin >> temp;
		if(temp==1)  count01++;
		if(temp==5)  count05++;
		if(temp==10) count10++; 
	}
	//output
	cout << count01 << endl;
	cout << count05 << endl;
	cout << count10 << endl;
	return 0;
}