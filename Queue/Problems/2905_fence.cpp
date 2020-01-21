#include<iostream>
#include<algorithm>
#include<memory.h>
#include<vector>
#include<queue>

using namespace std;

int N, X;								// N = The number of fences.				X = The size of rollers.
vector<int> fence;				// fence = The memory of input data.
int cnt = 0, res = 0;

void Simulation()
{
	vector<int> ans(N, 0);
	for (int i = 0; i < N; i += X)
	{
		if (i + X >= N)
			i = N - X;
		queue<int> que;
		cnt += 1;
		for (int j = i; j < i + X; j++)
			que.push(fence[j]);
		
		int mn = 987654321;
		while (!que.empty())
		{
			mn = min(mn, que.front());
			que.pop();
		}

		for (int j = i; j < i + X; j++)
			ans[j] = mn;
	}

	for (int i = 0; i < N; i++)
		res += (fence[i] - ans[i]);
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	cin >> N >> X;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		fence.push_back(num);
	}

	Simulation();

	cout << res << endl;
	cout << cnt << endl;
}