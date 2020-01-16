#include<iostream>
#include "Stack[Array].h"

using namespace std;             

void Init()								// To do initialize the stack.
{
	stk.top = -1;						// top is located in -1.
}

bool Full()								// To check stack is full or not.
{
	if (stk.top + 1 == MAX)			// Condition of full stack.
		return true;
	else
		return false;
}

bool Empty()							// To check stack is empty or not.
{
	if (stk.top == -1)					// Condition of empty stack.
		return true;
	else
		return false;
}

void Push(int key)					// Push the value in stack.	
{
	if (Full())
		cout << "Stack Full" << endl;
	else
	{
		stk.top += 1;
		stk.arr[stk.top] = key;
	}
}

void Pop()								// Pop the last value from stack.
{
	if (Empty())
		cout << "Stack Empty" << endl;
	else
		stk.top -= 1;
}

int Peek()								// Top in stack.
{
	return stk.arr[stk.top];
}

int Size()								// The size of stack.
{
	return stk.top + 1;
}

void Print()								// Print the whole of stack.
{
	for (int i = 0; i <= stk.top; i++)
		cout << stk.arr[i] << " ";
	cout << endl;
}