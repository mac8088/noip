#include <cstdio>
#include <iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
};
Node *head, *p, *r;  // r is rail pointer
int x;
int main()
{
	cin >> x;
	head = new Node;
	r=head;
	while(x!=-1)
	{
		p = new Node;
		p->data = x;
		p->next = NULL;
		r->next = p;
		r=p;
		cin >> x;
	}
	//iterate each node
	p=head->next;
	while(p->next!=NULL)
	{
		cout << p->data << " ";
		p=p->next;
	}
	//output data segement for the last node or using: do-while
	cout << p->data<<endl;  
	system("pause");
	return 0;
}

//1
//2
//3
//4
//5
//-1
//1 2 3 4 5
