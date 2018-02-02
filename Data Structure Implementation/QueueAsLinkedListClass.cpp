#include <iostream.h>
#include <conio.h>

//----------------------------------------------
class CirQueue
{
	//member data = attributes = fields = properties
private:
	int *arr;
	int front;
	int rear;
	int maxSize;

	//member functions = methods = operations = behaviors
public:
		//constructors
			//default constructors = 0-parameter constructor
			CirQueue()
			{
				
				front = rear =-1;
				maxSize=5;
				arr=new int[maxSize];
				
				//CirQueue(5);
			}
			//parameterized constructors
			CirQueue(int maxSize)
			{
				front = rear =-1;
				this->maxSize=maxSize;
				arr=new int[maxSize];
			}
		//destructors => only used in case of dynamic allocation (i.e., in case of using "new" OR "malloc" )
			~CirQueue()
			{
				delete [] arr;
			}
		//setters = input methods
		void insert(int info)
		{
			//speacial case: if queue is empty
			if(front==-1 && rear==-1)
			{
				rear=(rear+1)%maxSize;
				front=0;	// OR front = rear;
				arr[rear]=info;
			}
			else 
			//speacial case: if queue is full
			if ((rear+1)%maxSize == front)
			{
				cout<<"Queue is full"; // OR cout<<"overflow";
			}
			else
			{
				//general case
				rear=(rear+1)%maxSize;
				arr[rear]=info;
			}
		}
		//getters = output methods
		//others = helpers
};
int main()
{
	CirQueue cq1;//, cq2;
	int size;
	cout<<"Enter Circular Queue1 Size: ";
	cin>>size;
	CirQueue cq2(size);
	cq1.insert(2);
	cq1.insert(4);
	cq1.insert(6);
	cq1.insert(8);
	cq1.insert(10);
	cq1.insert(12);

	cq2.insert(2);
	cq2.insert(4);
	cq2.insert(6);
	cq2.insert(8);
	cq2.insert(10);
	cq2.insert(12);

	getch();
 return 0;
}