#include<iostream>
#include<vector>

#define MAX 201

using namespace std;

int N, M;								// N = The number of vertexes.					M = The memory of paths.
int parent[MAX];					// parent = The memory of root node in its own's group.	

int find(int u)		// To figure out the root node.
{
	if (u == parent[u])			// Base caes.
		return u;
	return find(parent[u]);
}

void merge(int u, int v)		// To merge two groups as one.
{
	u = find(u), v = find(v);
	
	if (u > v)			// To avoid tipping effect.
		parent[u] = v;
	else
		parent[v] = u;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	cin >> N >> M;
	for (int i = 0; i <= N; i++)
		parent[i] = i;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			int connect;
			cin >> connect;
			if (parent[i] != parent[j] && connect)
				merge(i, j);
		}
	}

	vector<int> vc;
	for (int i = 0; i < M; i++)
	{
		int val;
		cin >> val;
		vc.push_back(val);
	}

	for (int i = 0; i < vc.size() - 1; i++)
	{
		if (find(vc[i]) != find(vc[i + 1]))
		{
			cout << "NO" << endl;
			return 0;
		}
	}
	cout << "YES" << endl;
}