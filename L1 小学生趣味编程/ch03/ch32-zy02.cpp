#include <iostream>
using namespace std;
int main()
{
	int n;
	char i,j;
	n='a'-'A';  //���ǲ� 32 
	for(i='A';i<='Z';i++)
	{
		cout << i;  //��д 
		j=i+n;
		cout << j; //Сд 
	}
	return 0;
}


//AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz 
