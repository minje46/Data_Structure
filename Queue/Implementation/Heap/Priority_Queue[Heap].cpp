#include<iostream>
#include<algorithm>
#include "Priority_Queue[Heap].h"

#define INF 987654321

using namespace std;

void Init(priority_queue *pq, Compare cp)				// To do initialize the priority queue.
{
	pq->comp = cp;												// Set the standard of comparison.
	pq->size = 0;
	pq->arr[0] = INF;											// Do not use index 0 in heap.
}

void Insert(priority_queue *pq, int key)					// Insert the key value in priority queue.
{
	pq->size++;													// [Heap algorithm]
	int idx = pq->size;											// #1. Insert the new node at last location.
	pq->arr[idx] = key;

	while (idx != 1)												// #2. Compare the key value with parent node until root node.
	{
		if (pq->comp(pq->arr[idx], pq->arr[idx / 2]) > 0)
		{
			swap(pq->arr[idx], pq->arr[idx / 2]);
			idx /= 2;													// The index of parent node.
		}
		else
			break;
	}
}

void Delete(priority_queue *pq)								// Delete the key value in priority queue.
{																		// [Heap algorithm]
	pq->arr[1] = 0;												// #1. Delete the root node at first.
	int idx = 1;
	pq->arr[idx] = pq->arr[pq->size];					// #2. Move the last node to root node.
	pq->size--;

	while (idx * 2 <= pq->size)								// #3. Compare the key value with children node until leaf node.
	{
		int standard;												// Find the comparison standard one between left and right child node.
		if (pq->comp(pq->arr[idx * 2], pq->arr[idx * 2 + 1]) >= 0)
			standard = idx * 2;									// The index of left child.	
		else
			standard = idx * 2 + 1;								// The index of right child.

		if (pq->comp(pq->arr[standard], pq->arr[idx]) > 0)
		{
			swap(pq->arr[standard], pq->arr[idx]);
			idx = standard;
		}
		else
			break;
	}
}

bool Empty(priority_queue *pq)								// To check priority queue is empty or not.
{
	if (pq->size == 0)											// Condition of empty priority queue.
		return true;
	else
		return false;
}

int Get_Data(priority_queue *pq)							// To get the root key value in priority queue.
{
	return pq->arr[1];											// Root node.
}

void Print(priority_queue *pq)								// Print the whole of priority queue.
{
	for (int i = 1; i <= pq->size; i++)
		cout << pq->arr[i] << " ";
	cout << endl;
}