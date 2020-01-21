#include<iostream>
#include<deque>

#define MAX 10000001

using namespace std;

int N, X;											// N = The number of fences.				X = The size of rollers.
int fence[MAX];								// fence = The memory of input data.
long long area = 0;							// area = The size of area to paint.
int cnt = 0;										// cnt = The number of rollers.

void Simulation()			// To do based on monotonic priority queue algorithm.
{
	deque<pair<int, int>> deq;			// pair = {idx, fence_height}.
	for (int i = 0; i < X; i++)
	{												// [minimum height를 deque의 front에 배치.]
		while (!deq.empty() && deq.back().second > fence[i])
			deq.pop_back();
		deq.push_back(make_pair(i, fence[i]));
	}

	int height = deq.front().second;		// height = The height to paint.
	int idx = 0;
	for (int i = X; i <= N; i++)
	{												// Monotonic priority queue.
		while (!deq.empty() && deq.back().second > fence[i])
			deq.pop_back();
		deq.push_back(make_pair(i, fence[i]));
													// Compare the minimum height to paint.
		if (height != deq.front().second)
		{											// [초기 상태 (0~X) 이후, 새로운 minimum height을 찾은 경우,			
			cnt += (i - idx - 1) / X + 1;	// area, cnt 계산.]
			area -= (long long)(i - idx) *height;
			idx = i;
			height = deq.front().second;
		}
													// Check the index to avoid overflow.
		if (deq.front().first <= i - X)
		{
			int cur = deq.front().first;
			deq.pop_front();
													// [minimum height가 유지되는 경우,
			if (height != deq.front().second)		// area, cnt 계산을 위함.]
			{
				cnt += (cur - idx) / X + 1;
				area -= (long long)(cur - idx + 1)*height;
				idx = cur + 1;
				height = deq.front().second;
			}
		}
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	cin >> N >> X;
	for (int i = 0; i < N; i++)
	{
		cin >> fence[i];
		area += fence[i];
	}

	Simulation();

	cout << area << endl;
	cout << cnt << endl;
}