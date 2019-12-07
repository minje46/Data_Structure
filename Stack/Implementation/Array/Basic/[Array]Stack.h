#ifndef _Array_Stack_H		// if "_name.h" file is not defined,
#define _Array_Stack_H		// define "_name.h" file.	Then, do compile below code.

#define MAX 1001

struct Stack
{
	int arr[MAX];
	int top;
};

typedef struct Stack stack;
extern stack stk;					//	External global variable.
void Init();
bool Full();
bool Empty();

void Push(int key);
void Pop();

int Peek();
int Size();
void Print();
#else							// if not, do compile below code.

#endif						