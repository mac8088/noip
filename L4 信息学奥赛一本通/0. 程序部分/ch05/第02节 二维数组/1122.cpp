#include<iostream>
#include<cstdio>
using namespace std;
int a[6][6];
int main()
{	
	for(int i=1; i<=5; ++i)
		for(int j=1; j<=5; ++j)
			scanf("%d", &a[i][j]);   //input the matrix, must have the key of point: &
	
	bool q;
	int x, y, t = 0;
	for(int i=1; i<=5; ++i)   // iterate each of rows
	{
		q = true;  // the default value is true, that stands for found the target.
		t = 0;     // the max/min value
		for(int j=1; j<=5; ++j)
			if(a[i][j] > t)  // iterate each of columns
			{
				
				t = a[i][j];  // keep for the max value of the given row
				y=j;  x=i;    // also keep the location [x][y].
			}
		
		// recheck with the min value
		for(int k=1; k<=5; ++k)   // iterate each of rows with the fixed column: y
			if(a[k][y] < t) q = false;
		
		if(q==true)
		{
			cout << x << " " << y << " " << t;
			return 0;
		}
	}
	cout << "not found";
	return 0;
}
