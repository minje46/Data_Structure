#ifndef _List_Stack_H			// if "_name.h" file is not defined,
#define _List_Stack_H			// define "_name.h" file.	Then, do compile below code.

struct Node			// Node data.
{
	int key;
	struct Node *next;
};
typedef struct Node stack;
extern stack *head, *stk;		//	External global variable.

void Init();
bool Empty();

void Push(int key);
void Pop();

int Peek();
int Size();
void Print();
#else							// if not, do compile below code.

#endif