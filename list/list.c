#include<stdint.h>
#include<stdio.h>
#include<stdlib.h>
#include<assert.h>
#include"list.h"

 List* createList()
{
	List *mylist;
	mylist = ( List*)malloc(sizeof( List*));
	mylist->head = NULL;
	mylist->tail = NULL;
	mylist->count = 0;
	return mylist;
}

Node* _createNode_(int32_t data)
{
	Node* node;
	node = (Node*)malloc(sizeof(Node*));
	node->data = data;
	node->nextaddr = NULL;
	return node;
}

void insertHead(List *mylist, int32_t data)
{
	Node *newNode = _createNode_(data);
	if(mylist->count == 0)
	{
		mylist->head = mylist->tail = newNode;
	}
	else
	{
		newNode->nextaddr = mylist->head;	
		mylist->head = newNode;
	}
	mylist->count++;
}

void insertTail(List *mylist, int32_t data)
{
	Node *newNode = _createNode_(data);
	if(mylist->count == 0)
	{
		mylist->head = mylist->tail = newNode;
	}
	else
	{
		mylist->tail->nextaddr = newNode;
		mylist->tail = newNode;
	}
	mylist->count++;
}

void deleteHead(List *mylist)
{
	Node *temp;
	temp = mylist->head;
	if(mylist->count == 1)
	{
		mylist->head = mylist->tail = NULL;
	}
	else
	{
		mylist->head = mylist->head->nextaddr;
	}
	free(temp);
	mylist->count--;
}

void deleteTail(List* mylist)
{
	Node *temp;
	Node *tail = mylist->tail; 
	temp = mylist->head;
	
	while(temp->nextaddr != mylist->tail)
	{
		temp = temp->nextaddr;
	}
	temp->nextaddr = NULL;

	free(tail);
	mylist->count--;


}

void displayList(List* mylist)
{
	Node *displayNode;
	int32_t i=1;
	displayNode = mylist->head;
	while(displayNode != NULL)
	{
		printf("List item %d : %d\n",i,displayNode->data);
		displayNode = displayNode->nextaddr;
		i++;
	}
}


