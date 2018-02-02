#include <iostream.h>
#include <conio.h>
//using namespace std;
//struct Node

struct node
{
	int data;
	node*next;
} *ptr,*front,*rear;

//initQueue function
void initQueue()
{
	front=rear=NULL;
}
//insert function = enqueue

void insert(int data)
{

	ptr = new node;
	ptr->data=data;
	ptr->next=NULL;
	if(rear==NULL)
	{
		cout<<"Underflow";
		front=rear=ptr;
	}
	else
	{
		rear->next=ptr;
		rear=ptr;
	}
}
//-------------------------------------
//delete function = dequeue
/*node* del()
{

} */
//-------------------------------------
int main()
{
	initQueue();

	insert(3);
	insert(7);
	insert(9);

 return 0;
}