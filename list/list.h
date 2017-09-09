#include<stdint.h>


struct _node_
{
	uint32_t data;
	struct _node_ *nextaddr;
};
typedef struct _node_ Node;

struct _list_
{
	 Node *head;
	 Node *tail;
	uint32_t count;
};
typedef struct _list_ List;

List* createList();
void insertHead(List*, int32_t);
void insertTail(List*, int32_t);
void deleteHead(List*);
void deleteTail(List*);
void displayList(List*);
