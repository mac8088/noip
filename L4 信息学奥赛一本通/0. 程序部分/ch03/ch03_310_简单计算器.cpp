#include<iostream>
using namespace std;
int main()
{
	float num1, num2;
	char op;
	cin >> num1 >> num2 >> op;
	switch(op)
	{
		case '+': cout << num1 + num2 << endl; break;
		case '-': cout << num1 - num2 << endl; break;
		case '*': cout << num1 * num2 << endl; break;
		case '/': if(num2!=0) cout << num1 / num2 << endl; else cout << "Divided by zero!" << endl; break;
		break;
		default:  cout << "Invalid operator!" << endl;
	}
	return 0;
}

/*
case '/': if(num2!=0) cout << num1 / num2 << endl; else cout << "Divided by zero!" << endl; break;
*/
