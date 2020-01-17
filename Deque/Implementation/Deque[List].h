#ifndef _List_Deque_H			// if "_name.h" file is not defined,
#define _List_Deque_H			// define "_name.h" file.	Then, do compile below code.

struct Node						// Node data.
{
	int key;
	struct Node *prev;
	struct Node *next;
};

typedef struct Node deque;
extern deque *head, *deq;	//	External global variable.

void Init();
bool Empty();
void Push_front(int key);
void Pop_front();
void Push_rear(int key);
void Pop_rear();
int Front();
int Rear();
int Size();
void Print();

#else									// if not, do compile below code.

#endif