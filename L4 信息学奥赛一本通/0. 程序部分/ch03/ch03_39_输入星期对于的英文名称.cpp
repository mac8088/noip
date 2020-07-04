#include<iostream>
using namespace std;
int main()
{
	int weekday;
	cin >> weekday;
	switch(weekday)
	{
		case 1: cout << "Monday" << endl; break;
		case 2: cout << "Tuesday" << endl; break;
		case 3: cout << "Wednesday" << endl; break;
		case 4: cout << "Thursday" << endl; break;
		case 5: cout << "Friday" << endl; break;
		case 6: cout << "Saturday" << endl; break;
		case 7: cout << "Sunday" << endl; break;
		default: cout << "Input error!" << endl;
		
	}
	return 0;
}

/*
	switch 语句执行过程分为3个步骤描述 （参考一本通P51）。
	1.
	2.
	3.
	
	在实际使用switch语句时候，通常要求当执行完某个case后的一组语句序列后，
	就结束整个语句的执行，而不让它继续执行一下case语句后面的语句序列，
	为此：可以通过使用break语句来实现。
	
	在使用switch语句时，还要注意以下几点：
	1.
	2.
	3.
	4.

*/
