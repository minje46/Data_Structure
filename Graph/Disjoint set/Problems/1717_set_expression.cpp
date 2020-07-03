#include<iostream>
#include<string>

#define MAX 1000001

using namespace std;

int N, M;							// N = The number of vertexes.				M = The number of instructions.
int parent[MAX];				// parent = The memory of each vertex's root.

int find(int u)		// To figure out the root of vertex u.
{
	if (u == parent[u])		// Base case.		
		return u;					// [one's own self]
	return find(parent[u]);
}

void merge(int u, int v)			// To merge two groups as one.
{
	u = find(u), v = find(v);
	if (u < v)						// To disperse groups.
		parent[v] = u;
	else
		parent[u] = v;
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);

	cin >> N >> M;
	for (int i = 0; i <= N; i++)
		parent[i] = i;
	for (int i = 0; i < M; i++)
	{
		int op, a, b;
		cin >> op >> a >> b;
		if (op == 0)
		{
			if (a == b || find(a) == find(b))
				continue;
			merge(a, b);
		}
		else
		{
			string str = "YES";
			if (a != b)
				str = (find(a) == find(b) ? "YES" : "NO");
			cout << str << "\n";
		}
	}
}