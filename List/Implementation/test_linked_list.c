#include<stdio.h>
#include "Linked_list.h"

int main(void)
{
	if (Empty())
		printf("Empty\n");

	for (int i = 1; i <= 10; i++)
	{
		if (i % 2 == 0)
			push_front(i);
		else
			push_back(i);
	}
	Print();
	if (Empty())
		printf("Not empty");
	for (int i = 1; i <= 2; i++)
	{
		printf("\n");
		pop_front();
		pop_back();
		printf("%d \n", Size());
	}
}