#include<stdint.h>
#include<stdio.h>
#include<assert.h>
#include"list.h"

int main()
{
	List *mylist = createList();
	
	
	insertHead(mylist,10);
	insertTail(mylist,20);
	insertHead(mylist,30);
	insertTail(mylist,40);
	insertHead(mylist,50);
	displayList(mylist);

	deleteHead(mylist);	
	deleteHead(mylist);
	deleteTail(mylist);
	displayList(mylist);

	return 0;
}
