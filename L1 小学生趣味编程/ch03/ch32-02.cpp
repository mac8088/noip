#include <iostream>
using namespace std;
int main()
{
	char i;
	//the ascii of a is 97
	for(i='a';i<='z';i++)
		cout << i << ' ';
	cout << endl;
	for(i='Z';i>='A';i--)
		cout << i << ' ';
	return 0;
}

//a b c d e f g h i j k l m n o p q r s t u v w x y z
//Z Y X W V U T S R Q P O N M L K J I H G F E D C B A
