#ifndef _Array_Stack_H		// if "_name.h" file is not defined,
#define _Array_Stack_H		// define "_name.h" file.	Then, do compile below code.

#define MAX 1001

struct Stack
{
	int arr[MAX];
	int top;
};

typedef struct Stack stack;

void Init(stack *pstk);
bool Full(stack *pstk);
bool Empty(stack *pstk);

void Push(stack *pstk, int key);
void Pop(stack *pstk);

int Peek(stack *pstk);
int Size(stack *pstk);
void Print(stack *pstk);
#else							// if not, do compile below code.

#endif						