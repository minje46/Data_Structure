#include<iostream>
#include<algorithm>
#include "Min_Heap[Array].h"

#define INF -987654321

using namespace std;

void Init()										// To do initialize the heap.
{
	hp.arr[0] = INF;							// Do not use index 0.
	hp.size = 0;
}

void Insert(int key)							// Insert the key value in heap.
{
	hp.size++;
	int idx = hp.size;							// #1. Insert the new node at last location.
	hp.arr[idx] = key;

	while (idx != 1)							// #2. Compare the key value with parent node until root node.
	{
		if (hp.arr[idx] < hp.arr[idx / 2])
		{
			swap(hp.arr[idx], hp.arr[idx / 2]);
			idx /= 2;								// The index of parent node.
		}
		else
			break;
	}
}

void Delete()									// Delete the key value in heap.
{
	hp.arr[1] = 0;								// #1. Delete the root node at first.
	int idx = 1;
	hp.arr[idx] = hp.arr[hp.size];		// #2. Move the last node to root node.
	hp.size--;

	while (idx * 2 <= hp.size)				// #3. Compare the key value with children node until leaf node.
	{
		int small;								// Find the bigger one between left and right child node.
		if (hp.arr[idx * 2] < hp.arr[idx * 2 + 1])
			small = idx * 2;					// The index of left child.	
		else
			small = idx * 2 + 1;				// The index of right child.

		if (hp.arr[small] < hp.arr[idx])
		{
			swap(hp.arr[small], hp.arr[idx]);
			idx = small;
		}
		else
			break;
	}
}

bool Empty()									// To check heap is empty or not.
{
	if (hp.size == 0)							// Condition of empty heap.
		return true;
	else
		return false;
}

int Get_Min()									// To get the maximum key value in heap.
{
	return hp.arr[1];							// Root node.
}

void Print()										// Print the whole of heap.
{
	for (int i = 1; i <= hp.size; i++)
		cout << hp.arr[i] << " ";
	cout << endl;
}