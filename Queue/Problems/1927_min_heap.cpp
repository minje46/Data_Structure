#include<iostream>
#include<queue>

using namespace std;

priority_queue<int, vector<int>, greater<int>> que;			// que = The memory of max heap.

int main(void)
{				
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	int N;																		// N = The number of instructions.
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;

		if (num == 0)
		{
			if (que.empty())
				cout << 0 << "\n";
			else
			{
				cout << que.top() << "\n";
				que.pop();
			}
		}

		else
			que.push(num);
	}
}