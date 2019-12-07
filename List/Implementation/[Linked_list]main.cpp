#include<iostream>
#include "Linked_list.h"

using namespace std;

Node *head, *tail = NULL;

int main(void)
{
	if (Empty())
		cout << "List is empty" << endl;

	for (int i = 1; i <= 10; i++)
	{
		if (i % 2 == 0)
			push_front(i);
		else
			push_back(i);
	}
	Print();
	if (Empty())
		cout << "List is not empty" << endl;

	for (int i = 1; i <= 2; i++)
	{
		pop_front();
		pop_back();
		cout << Size() << endl;
	}
}