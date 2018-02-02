//header files------------------------
#include <iostream.h>
#include <conio.h>
#include "LinkedList.h"
//structures--------------------------

//global variables--------------------
    Node *start, *rear, *ptr, *temp;
//------------------------------------
struct LinkedList
{
	//member data
	Node *front;
	Node *rear;
};
//linked list functions---------------
/*initLinkedList(LinkedList &list)
{
	
}
*/
void initLinkedList()
{
	start=rear=NULL;
}
//------------------------------------
void insertAtStart(int data)
{
	//create new node
	ptr=new Node;
	//insert your data inside this node
	ptr->data=data;
	if(start==NULL && rear==NULL)  //this is special case (i.e., list is empty)
	{
		//link this new node to the empty list	
		rear=ptr;
	}
	ptr->next=start;
	start=ptr;
}
//------------------------------------
void insertAtEnd(int data)
{
	//create new node
	ptr=new Node;
	//insert your data inside this node
	ptr->data=data;
	ptr->next=NULL;
	if(start==NULL && rear==NULL)  //this is special case (i.e., list is empty)
	{
		//link this new node to the empty list	
		start=ptr;
	}
	//link this new node to list at the end
	rear->next=ptr;
	rear=ptr;
}
//------------------------------------
void deleteFromStart()
{}
//------------------------------------
void displayLinkedList()
{
	temp=start;
	while(temp!=NULL)
	{
		cout<<(temp->data)<<"->";
      temp=temp->next;
	}
	cout<<"NULL";
}
//------------------------------------

//------------------------------------
int main()
{
  /*LinkedList list1, list2;

  initLinkedList(list1);
  initLinkedList(list2);
  */
	initLinkedList();
	insertAtStart(3);

	insertAtStart(7);

	insertAtEnd(9);

	displayLinkedList();

   getch();
	return 0;
}
