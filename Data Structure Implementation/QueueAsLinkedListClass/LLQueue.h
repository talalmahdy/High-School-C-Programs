#ifndef LLQUEUE
#define LLQUEUE
//using namespace std;
//struct Node-----------------------
struct node
{
	int data;
	node*next;
};// *ptr,*front,*rear;
//-----------------------------------
class LLQueue
{
	//member data------------
private:
	node* front;
	node* rear;

	//member functions--------
public:
		//constructors
		LLQueue();
		//destructors
		~LLQueue();
		//setters
		void insert(int data);
		//getters
		node* del();
		//others
		int isEmpty();
};
//=======================================================
//implementation
LLQueue::LLQueue()
		{
			front=rear=NULL;
		}
//------------------------------------------------------
LLQueue::~LLQueue()
		{
			node* ptr=front;
			while(ptr!=NULL)
			{
				front=front->next;
				delete ptr;
				ptr=front;
			}
			rear=NULL;
		}
//------------------------------------------------------
void LLQueue::insert(int data)
		{

			node *ptr = new node;
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
//------------------------------------------------------
node* LLQueue::del()
		{
			//special case: if there are no node at all
			if(front==NULL && rear==NULL)	//OR if(isEmpty())
			{
				cout<<"underflow";
				return NULL;
			}
			//general case: if more than 1 node exist
			node* ptr=front;
			front=front->next;
			ptr->next=NULL;
			//special case: if this is the last node in linked list
			if(front==NULL)
				rear=NULL;
			return ptr;
		}
//------------------------------------------------------
int LLQueue::isEmpty()
		{
			return (front==NULL && rear==NULL);
		}
//------------------------------------------------------
#endif