#include<iostream>
#include<queue>

using namespace std;

priority_queue<int, vector<int>, less<int>> max_heap;					// max_heap = The memory of max heap.
priority_queue<int, vector<int>, greater<int>> min_heap;				// min_heap = The memory of min heap.

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	int N, num;																			// N = The number of instructions.
	cin >> N;	
	for (int i = 0; i < N; i++)
	{
		cin >> num;
							// #1. max heap has one more elements than min heap.
		if (max_heap.empty() || max_heap.size() == min_heap.size())
			max_heap.push(num);
		else
			min_heap.push(num);
							// #2. If max heap's root value is bigger than min heap's root value, swap each other.
		if (!max_heap.empty() && !min_heap.empty() && max_heap.top() > min_heap.top())
		{					// If so, max heap's root value is always the middle value.
			int a = max_heap.top();
			int b = min_heap.top();
							
			max_heap.pop();
			min_heap.pop();
							// Swap each other.
			max_heap.push(b);
			min_heap.push(a);
		}

		cout << max_heap.top() << "\n";
	}
}