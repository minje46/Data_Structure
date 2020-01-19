#include<iostream>
#include<queue>

using namespace std;

int N;								// N = The number of cards.
queue<int> que;				// que = The memory of integer queue.

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	cin >> N;	
	for (int i = 1; i <= N; i++)
		que.push(i);

	while (que.size() != 1)
	{
		que.pop();				// Discard the first card.
		int scd = que.front();
		que.pop();
		que.push(scd);		// Push back the second card.
	}

	cout << que.front() << endl;
}