#include <iostream>
#include <conio.h>
using namespace std;
//-------------------------------------------------
//-------------------------------------------------
//gobal variable
int top, *arr, maxSize;
//-------------------------------------------------
void initStack()
{
	arr=new int[maxSize];
	top=-1;
}
//-------------------------------------------------
int isOverFlow()
{
	return top==maxSize-1;
}
//-------------------------------------------------
void push(int data)
{
	if(isOverFlow())
	{
		cout<<"stack is overfloaw!"<<endl;
	}
	else
	{
		//increment top by 1
		top++;
		//put the data at this new position
		arr[top]=data;
	}
}
//-------------------------------------------------
int isEmpty()
{
	return top==-1;
}
//-------------------------------------------------
void pop(int &data)
{
	if(isEmpty())
	{
		cout<<"stack is empty";
	}
	else
	{
		data=arr[top];
		top--;
	}
}
//------------------------------------------------

int main()
{
	cout<<"Enter max size of your stack: ";
	cin>>maxSize;
	initStack();

	push(3);

	if(!isEmpty())
	{
		int data;
		pop(data);
		int y=data+7;
		cout<<"y="<<y<<endl;
	}
	return 0;
}