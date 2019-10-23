#include <iostream>
using namespace std;
int main()
{
	int n;
	char i,j;
	n='a'-'A';  //总是差 32 
	for(i='A';i<='Z';i++)
	{
		cout << i;  //大写 
		j=i+n;
		cout << j; //小写 
	}
	return 0;
}


//AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz 
