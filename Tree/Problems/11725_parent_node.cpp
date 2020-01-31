#include<iostream>
#include<vector>

#define MAX 100001

using namespace std;

int N;											// N = The number of nodes.
vector<int> map[MAX];				// map = The memory of input data as tree.
int parent[MAX];							// parent = The memory of each node's parent.
bool visit[MAX];							// visit = The memory of visited or not.

void DFS(int node)		// To figure out what the parent node is.
{
	visit[node] = true;
	for (int i = 0; i < map[node].size(); i++)
	{
		int next = map[node][i];		// Connected nodes. [children node + parent node.]

		if (!visit[next])		// If visited already, that was parent node.
		{						// [That's beacuse, Teee Search starts from root node.]
			parent[next] = node;
			DFS(next);
		}
	}
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	cin >> N;
	for (int i = 1; i < N; i++)
	{
		int a, b;
		cin >> a >> b;
		map[a].push_back(b);
		map[b].push_back(a);
	}

	DFS(1);			// Root node.

	for (int i = 2; i <= N; i++)
		cout << parent[i] << endl;
}