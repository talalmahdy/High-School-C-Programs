#include <iostream.h>
#include <conio.h>
//#include <cstdlib.h>
#include "LLQueue.h"
//using namespace std;
//-------------------------------------
int main()
{
	LLQueue llq1;//, llq2;
	//initQueue(llq1);

	llq1.insert(3);
	llq1.insert(7);
	llq1.insert(9);

	node * result=llq1.del();
	if(result !=NULL)
	{
		int data= result->data;
		cout<<data;
		delete result;
	}
   getch();
   //system("pause");

 return 0;
}