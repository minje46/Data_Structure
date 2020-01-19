#include<iostream>
#include<algorithm>
#include<queue>

#define MAX 101

using namespace std;

int N, M;											// N = The size of printer queue.						M = The target to print.
int priority[MAX];								// priority = The memory of priority.
int answer;										// answer = The order of printed as output.

int Simulation()								// To figure out the target's order to print.
{
	queue<int> que;
	for (int i = 0; i < N; i++)
		que.push(i);		

	int cnt = 0;
	while (!que.empty())
	{
		auto cur = que.front();
		que.pop();
													// Whether the current doc has highest priority or not.
		if (*max_element(priority, priority + N) == priority[cur])			 
		{											// "max_element" returns the pointer of maximum value. 
			cnt++;								// Count of printed documents.
			priority[cur] = -1;				// Convert to trash value.
			
			if (M == cur)						// Target.
				return cnt;
		}
		else
			que.push(cur);
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	int test_case;
	cin >> test_case;
	for (int t = 1; t <= test_case; t++)
	{	
		cin >> N >> M;

		for (int i = 0; i < N; i++)
			cin >> priority[i];

		answer = Simulation();

		cout << answer << endl;
	}
}