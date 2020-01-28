#include<iostream>
#include "Priority_Queue[Heap].h"

using namespace std;

int compare(int a, int b)			// Do implement the comparison standard by user.
{
	return a - b;			// Max heap.
	//return b - a;			// Min heap.	
}

priority_queue pq;		// Priority queue based on heap.

int main(void)
{
	Init(&pq, compare);
	if (Empty(&pq))
		cout << "Heap is empty" << endl;

	for (int i = 1; i <= 9; i++)
		Insert(&pq, i);
	cout << "Size of heap : " << pq.size << endl;
	Print(&pq);

	for (int i = 0; i < 3; i++)
	{
		Delete(&pq);
		Print(&pq);
	}

	for (int i = 10; i < 13; i++)
	{
		Insert(&pq, i);
		Print(&pq);
	}
}