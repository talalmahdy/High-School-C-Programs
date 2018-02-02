#include <iostream>
#include <conio.h>
using namespace std;
//-------------------------------------------------
struct Node
{
	int data;
	Node *next;
};
//-------------------------------------------------
//gobal variable
Node *top, *ptr, *temp;
//-------------------------------------------------
void initStack()
{
	top=NULL;
}
//-------------------------------------------------
void push(int data)
{
	//create new Node
	ptr=new Node;
	//insert your data inside this node
	ptr->data=data;
	//link this node to top
	ptr->next=top;
	top=ptr;
}
//-------------------------------------------------
int isEmpty()
{
	return top==NULL;
}
//-------------------------------------------------
Node* pop()
{
	if(isEmpty())
	{
		cout<<"stack is empty";
		return NULL;
	}
	ptr=top;
	top=top->next;
	ptr->next=NULL;
	return ptr;
}
//------------------------------------------------

int main()
{
	initStack();

	push(3);

	Node* result=pop();
	if(result!=NULL)
	{
		int data=result->data;
		int y=data+7;
		cout<<"y="<<y<<endl;
	}
	return 0;
}