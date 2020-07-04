#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	for(int i=100;i<=200;++i)
	{
		int x = 2;
		while(x<=floor(sqrt(i)) && i%x!=0)		//floor为取整函数，向下取整, floor(3.14)=3 
			++x;								//在枚举的范围内并且没有出现约数则继续枚举！ 
		if(x>floor(sqrt(i)))
			cout << i << "\t";
	}
	return 0;
}

//--------------------------------
//101     103     107     109     113     127     131     137     139     149
//151     157     163     167     173     179     181     191     193     197
//199
//--------------------------------
