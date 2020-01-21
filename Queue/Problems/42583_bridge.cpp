#include<iostream>
#include<queue>
#include <vector>

using namespace std;

int solution(int bridge_length, int weight, vector<int> truck_weights)		// To figure out the total time to pass through bridge.
{
	int answer = 0;
	queue<pair<int, int>> que;				// que = {idx, departure time}
	int tot = 0, sec = 1, idx = 0;				// tot = The current total weights on bridge.
	while (true)										
	{													// 	[Queue의 front만 확인해도 되는 이유.]
		if (que.front().second + bridge_length <= sec)							// The only one truck could move to  bridge.
		{												// Compare the arrived time.
			tot -= truck_weights[que.front().first];
			que.pop();
		}

		if (idx >= truck_weights.size())		// Overflow. [End condition.]
		{												// [마지막으로 bridge로 출발한 truck의 시간으로 total time 계산 가능.]
			answer = que.back().second;	// That's why the rear one in queue will be used.
			break;
		}
														// Compare the weights for the next truck.
		if (tot + truck_weights[idx] <= weight)
		{
			que.push(make_pair(idx, sec));
			tot += truck_weights[idx];
			idx += 1;
		}
		sec++;										// Time goes.
	}
	return answer + bridge_length;			// Total time = Last truck departure time + bridge's lenght.
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	vector<int> vc = { 7,4,5,6 };
	cout << solution(2, 10, vc) << endl;
}