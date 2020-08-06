#include <cstdio>
#include <iostream>
using namespace std;
struct Node
{
	int data;
	Node *next;
};
Node *head, *p, *r;  // r is rail pointer
int x, target;

void output()
{
	//iterate each node
	p=head->next;
	while(p->next!=NULL)
	{
		cout << p->data << " ";
		p=p->next;
	}
	//output data segement for the last node or using: do-while
	cout << p->data<<endl;  	
}

bool find(int x)
{
	p = head->next;
	while(p->data!=x && p->next !=NULL)
	{
		p=p->next;
	}
	return (p->data==x);
}

void get(Node *head, int i)
{
	Node *p;
	int j;
	p=head->next;
	j=1;
	while(p!=NULL && j<i)
	{
		p=p->next;
		j++;
	}
	if(p!=NULL && j==i)
		cout << p->data << endl;
	else 
		cout << "not exist!";
}

//insert X into the ahead of the i element
void insert(Node *head, int i, int x)
{
	Node *p, *s;  // *s is new node
	int j;
	p = head;
	j=0;
	// find i-1 node, prepre to insert new node after it (i-1)
	while(p!=NULL && j<i-1)	
	{
		p=p->next;
		j++;
	}
	if(p==NULL)
		cout << "no this position!" << endl;
	else
	{
		s = new Node;
		s->data = x;
		s->next = p->next;
		p->next = s;
	}
}

void deleting(Node *head, int i)
{
	Node *p, *s;
	int j;
	p = head;
	j=0;
	// find i-1 node, let p point to i-1 node
	while(p->next!=NULL && j<i-1)
	{
		p=p->next;
		j++;
	}
	if(p->next == NULL)
		cout << "no this position!" << endl;
	else
	{
		s=p->next;
		p->next = p->next->next;  // p->next = s->next
		free(s);   // release the memeory
	}
}

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

	// output linked list
	output();
	
	cout << "find node with order number:" << endl;
	cin >> target;
	//get i
	get(head, target);  //e.g.: target = 3, the Third Node  
	
	//insert new node
	insert(head, target, 99);
	
	// output linked list again
	output();
	return 0;
}


