#include<iostream>
#include<algorithm>
#include<queue>
#include<map>

#define MAX 101

using namespace std;

int K, N;												// K = The number of prime numbers.				N = The target order.
long long prime[MAX];						// prime = The memory of input prime numbers.
map<long long, bool> visit;					// visit = The memory of visited or not.	
long long answer;								// answer = The target order's value as output.

void Simulation()			// To figure out prime number's multiplication.
{
	priority_queue<long long, vector<long long>, greater<long long>> que;	
	que.push(1);
	long long biggest = 0;
	while (N--)				// [Queue에서 pop하기 때문에, N의 개수도 감소.]
	{
		auto cur = que.top();
		que.pop();

		for (int i = 0; i < K; i++)
		{						// [Min heap이기 때문에, 가장 작은 단위로 prime number들을 multiplication.]
			long long next = cur * prime[i];
			if (que.size() > N && next > biggest)			// End condition.
				continue;											// Overflow + N'th value.	

			if (!visit.count(next))
			{
				biggest = max(biggest, next);
				visit[next] = true;
				que.push(next);
			}
		}
	}
	answer = que.top();
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	cin >> K >> N;
	for (int i = 0; i < K; i++)
		cin >> prime[i];

	Simulation();

	cout << answer << endl;
}