#include <iostream>
using namespace std;
int main()
{
	int ge, shi, bai, i;
	for(i=100;i<1000;i++)
	{
		bai = i/100;
		shi = (i/10)%10;
		ge=i%10;
		if(bai==shi && bai==ge)
			cout << i << endl;
	}
	return 0;
}
