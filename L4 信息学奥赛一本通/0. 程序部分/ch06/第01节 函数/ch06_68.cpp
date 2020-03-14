#include <iostream>
#include <cstdlib>
using namespace std;
char ch[6] = {'A', 'B', 'C', 'D', 'E', 'F'};  //HEX
void turnData(int n, int a);
int main()
{
	int n;
	cin >> n;
	turnData(n, 2);
	turnData(n, 8);
	turnData(n, 16);
	return 0;
}

void turnData(int n, int a)
{
	int x[17], i, k = 0; 
	cout << n << " turn into " << a << " : ";
	if(n<0) cout << "-";
	
	int j = abs(n);
	do
	{
		k++;
		i=j%a;
		j/=a;
		x[k] = i;  // store the remainder
	}while(j!=0);  // here should have ;
	
	//output
	for(int h=k; h>=1; --h)
		if(x[h]<10) cout << x[h];
		else cout << ch[x[h]-10];  // for HEX: 10, 11, 12, 13, 14, 15
	cout << endl;
}

//16
//16 turn into 2 : 10000
//16 turn into 8 : 20
//16 turn into 16 : 10
