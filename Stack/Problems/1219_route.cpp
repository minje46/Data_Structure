#include<iostream>
#include<memory.h>
#pragma warning(disable:4996)
#define MAX 100

using namespace std;

int N;									// N = The size of map.
int map[2][MAX];				// map = The memory of input array.
bool answer;						// answer = The route from departure to destination exists as output.

void DFS(int cur)
{
	if (answer)			// Base case.
		return;

	if (cur == 99)		// Base case. [Destination.]
	{
		answer = true;
		return;
	}

	if(map[0][cur] != -1)
		DFS(map[0][cur]);
	if (map[1][cur] != -1)
		DFS(map[1][cur]);
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	freopen("input.txt", "r", stdin);
	int test_case;
	for (int t = 1; t <= 10; t++)
	{	// Initialization.
		memset(map, -1, sizeof(map));
		answer = false;

		cin >> test_case >> N;
		for (int i = 0; i < N; i++)
		{
			int a, b;
			cin >> a >> b;
			map[i % 2][a] = b;
		}
		
		DFS(map[0][0]);
		DFS(map[1][0]);
		cout << "#" << t << " " << answer << endl;
	}
}