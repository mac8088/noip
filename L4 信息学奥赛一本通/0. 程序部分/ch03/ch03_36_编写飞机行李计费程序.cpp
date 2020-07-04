#include<cstdio>
using namespace std;
int main()
{
	float w, s;
	scanf("%f", &w);
	if(w <= 20)
	{
		s = w * 1.68;
		printf("%.2f\n", s);		//printf("%.2f\n", w * 1.68);
	} 
	else 
	{
		s = w * 1.98;
		printf("%.2f\n", s);		//printf("%.2f\n", w * 1.98);
	}
	return 0;
}


/*
	if语句允许嵌套，即语句1和语句2还可以是if语句。
	if语句的就近配对原则。
	当if语句嵌套时，约定else总是和最近的一个if语句配对。 
	
	if(a>b)
	  if(b>c) y=a;
	  else y=c;
	  
	if(a>b)
	{
      if(b>c)  y =a;
	}
	else y =c;
	
*/
