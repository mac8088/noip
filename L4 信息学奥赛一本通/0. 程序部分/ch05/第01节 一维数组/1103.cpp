#include <iostream>
using namespace std;

int main()
{
	int apples[10] = {0};
	int height, desk = 30, count = 0;
	for(int i=0; i<10; ++i)  
		cin >> apples[i];
	cin >> height;
	for(int i=0; i<10; ++i)
		if(apples[i] <= (height + desk)) count++;
	cout << count;
	return 0;
}
