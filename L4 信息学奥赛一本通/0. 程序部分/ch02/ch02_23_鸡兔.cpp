#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
	//分析：设鸡为j只，兔为t只； 头为h，脚为f，那么有：
	//j+t=30			①			
	//2*j+4*t=90 		②
    //利用小学奥数中鸡兔同笼”的公式：   
	//j=(4*h-f)/2		①
	//t=h-j				②
	
	int h,f,j,t;						//定义变量 
	h=30; f=90;							//赋初值 
	j=(4*h-f)/2;						//计算鸡的只数 
	t=h-j;								//计算兔的只数 
	cout<<"j="<<j<<" t="<<t<<endl;		//输出结果 
	getchar();	
}
