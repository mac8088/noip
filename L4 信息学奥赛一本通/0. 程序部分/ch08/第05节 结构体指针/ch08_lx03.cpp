#include <cstdio>
#include <iostream>
using namespace std;
struct student
{
	char name[20];
	char sex;
	int score;
} *p; 

// OR:
//struct student
//{
//	char name[20];
//	char sex;
//	int score;
//};
//
//student *p; 

// compile error: field 'p' has incomplte type 'stu'
//struct stu
//{
//	char name[20];
//	int age, score;
//	stu p;  
//};

// pointer is OK for self-referential structure
struct stu
{
	char name[20];
	int age, score;
	stu *p;  
};

// using in Linked list structure
struct node
{
	int x,y;
	node *next;
} point;


int main()
{
	cout << "Self reference structure is the cornerstone of dynamic data structure in C/C + +" << endl; 
	return 0;
}