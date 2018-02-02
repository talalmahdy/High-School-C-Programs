#include <iostream>
#include<conio.h>
using namespace std;
//struct Node

struct node
{
	int data;
	node*next;
};// *ptr,*front,*rear;
//-----------------------------------
struct LLQueue
{
	node* front;
	node* rear;
};
//-----------------------------------
//initQueue function
void initQueue(LLQueue & llq)
{
	llq.front=llq.rear=NULL;
}
//insert function = enqueue

void insert(LLQueue & llq, int data)
{

	node *ptr = new node;
	ptr->data=data;
	ptr->next=NULL;
	if(llq.rear==NULL)
	{
		cout<<"Underflow";
		llq.front=llq.rear=ptr;
	}
	else
	{
		llq.rear->next=ptr;
		llq.rear=ptr;
	}
}
//-------------------------------------
//delete function = dequeue
node* del(LLQueue llq)
{
	//special case: if there are no node at all
	if(llq.front==NULL && llq.rear==NULL)
	{
		cout<<"underflow";
		return NULL;
	}
	//general case: if more than 1 node exist
	node* ptr=llq.front;
	llq.front=llq.front->next;
	ptr->next=NULL;
	//special case: if this is the last node in linked list
	if(llq.front==NULL)
		llq.rear=NULL;
	return ptr;
}
//-------------------------------------
int main()
{
	LLQueue llq1, llq2;
	initQueue(llq1);

	insert(llq1,3);
	insert(llq1,7);
	insert(llq1,9);

	node * result=del(llq1);
	if(result !=NULL)
	{
		int data= result->data;
		cout<<data;
	}

 return 0;
}