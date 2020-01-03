#include<iostream>
#include<malloc.h>
#include "Stack[List-Class].h"

using namespace std;

Stack::Stack()							// Constructor.
{
	head = NULL;						// stack is initialized as null.
	stk = NULL;						// stk is used as top.
}

Stack::~Stack()						// Destructor.
{
	delete(head);
	delete(stk);	
}

bool Stack::Empty()					// To check stack is empty or not.
{
	if (head == stk)					// Condition of empty stack.
		return true;
	else
		return false;
}

void Stack::Push(int key)			// Push the value in stack.	
{
	stack *new_node = (stack *)malloc(sizeof(stack));
	new_node->key = key;
	new_node->next = NULL;

	if (Empty())
	{
		head = (stack *)malloc(sizeof(stack));
		stk = (stack *)malloc(sizeof(stack));
		stk = new_node;
		head->next = stk;
	}
	else
	{
		stk->next = new_node;
		stk = new_node;
	}
}

void Stack::Pop()								// Pop the last value from stack.
{
	if (Empty())
		cout << "Stack Empty" << endl;
	else
	{
		stack *ptr = head->next;
		while (ptr->next != stk)
			ptr = ptr->next;
		free(stk);
		stk = ptr;
		stk->next = NULL;
	}
}

int Stack::Peek()								// Top in stack.
{
	return stk->key;
}

int Stack::Size()								// The size of stack.
{
	int cnt = 0;
	stack *ptr = head->next;
	while (ptr)
	{
		ptr = ptr->next;
		cnt++;
	}
	return cnt;
}

void Stack::Print()								// Print the whole of stack.
{
	stack *ptr = head->next;
	while (ptr)
	{
		cout << ptr->key << " ";
		ptr = ptr->next;
	}
	cout << endl;
}