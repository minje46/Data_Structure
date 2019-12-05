#include<iostream>
#include "Stack.h"

#define MAX 1001

using namespace std;

int stk[MAX];
int top = -1;

void Push(int key)		// Push the value in stack.	
{
	if (top < MAX)
	{
		top += 1;
		stk[top] = key;
	}
}

void Pop()				// Pop the last value from stack.
{
	if (top >= 0)
		top--;
}

int Peek()				// Top in stack.
{
	if (top == -1)
		return 0;
	else
		return top;
}

int Size()				// The size of stack.
{
	return top + 1;
}

bool Empty()			// Whether stack is empty or not.
{
	if (top == -1)
		return true;
	else
		return false;
}

void Print()				// Print the whole of stack.
{
	for (int i = 0; i <= top; i++)
		cout << stk[i] << " ";
	cout << endl;
}