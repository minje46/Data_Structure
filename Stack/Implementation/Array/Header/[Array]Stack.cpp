#include<iostream>
#include "[Array]Stack.h"

using namespace std;

void Init(stack *pstk)						// To do initialize the stack.
{
	pstk->top = -1;						// top is located in -1.
}

bool Full(stack *pstk)						// To check stack is full or not.
{
	if (pstk->top + 1 == MAX)		// Condition of full stack.
		return true;
	else
		return false;
}

bool Empty(stack *pstk)					// To check stack is empty or not.
{
	if (pstk->top == -1)					// Condition of empty stack.
		return true;
	else
		return false;
}

void Push(stack *pstk, int key)			// Push the value in stack.	
{
	if (Full(pstk))
		cout << "Stack Full" << endl;
	else
	{
		pstk->top += 1;
		pstk->arr[pstk->top] = key;
	}
}

void Pop(stack *pstk)						// Pop the last value from stack.
{
	if (Empty(pstk))
		cout << "Stack Empty" << endl;
	else
		pstk->top -= 1;
}

int Peek(stack *pstk)						// Top in stack.
{
	return pstk->top;
}

int Size(stack *pstk)						// The size of stack.
{
	return pstk->top + 1;
}

void Print(stack *pstk)						// Print the whole of stack.
{
	for (int i = 0; i <= pstk->top; i++)
		cout << pstk->arr[i] << " ";
	cout << endl;
}