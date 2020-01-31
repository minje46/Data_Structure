#include<iostream>
#include<memory.h>
#include<vector>

#define MAX 10001

using namespace std;

int V;												// V = The number of vertexes.
vector<pair<int, int>> tree[MAX];		// tree = The memory of tree figure.	[Node number, Distance]
bool visit[MAX];								// visit = The memory of visited or not.
int leaf;											// leaf = The memory of leaf node.
int answer = 0;								// answer = The longest tree radius as output.

void DFS(int node, int dist)		// To figure out the longest radius from parent node.
{
	if (visit[node])					// Base case.
		return;

	visit[node] = true;

	if (dist > answer)					// Compare the distance.
	{
		answer = dist;
		leaf = node;
	}

	for (int i = 0; i < tree[node].size(); i++)
		DFS(tree[node][i].first, dist + tree[node][i].second);
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	cin >> V;
	for (int i = 1; i <= V; i++)
	{
		int cur;
		cin >> cur;				// parent node.	

		int a, b;
		cin >> a >> b;
		tree[cur].push_back(make_pair(a, b));
	}

	memset(visit, false, sizeof(visit));
	DFS(1, 0);					// From root node.
	// Initialization.	
	memset(visit, false, sizeof(visit));
	answer = 0;
	DFS(leaf, 0);				// From leaf node to another leaf node will be the longest radius.

	cout << answer << endl;
}
