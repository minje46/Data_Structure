#ifndef _LINKED_LIST_H		// if "_name.h" file is not defined,
#define _LINKED_LIST_H		// define "_name.h" file.	Then, do compile below code.

struct Node			// Node data.
{
	int key;
	struct Node *next;
};
typedef struct Node Node;
extern Node *head, *tail;

void push_front(int key);
void push_back(int key);

void pop_front();
void pop_back();

bool Empty();
int Size();
void Print();
#else							// if not, do compile below code.

#endif
