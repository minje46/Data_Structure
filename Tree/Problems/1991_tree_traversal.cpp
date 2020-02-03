#include<iostream>
#include<vector>

#define MAX 27

using namespace std;

int N;												// N = The number of nodes.
vector<char> tree[MAX];					// tree = The memory of input data as tree figure.

void Pre_order(int idx)				// To traverse tree in pre order.
{
	if (tree[idx].size() == 0)		// Base case.
		return;							// [No node.]

	if(tree[idx][0] != '.')			// Root.
		cout << tree[idx][0];
	if (tree[idx][1] != '.')			// Left.
		Pre_order(tree[idx][1] - 65);
	if (tree[idx][2] != '.')			// Right.
		Pre_order(tree[idx][2] - 65);
}

void In_order(int idx)				// To traverse tree in in order.
{
	if (tree[idx].size() == 0)		// Base case.
		return;							// [No node.]

	if (tree[idx][1] != '.')			// Left.
		In_order(tree[idx][1] - 65);
	if (tree[idx][0] != '.')			// Root.
		cout << tree[idx][0];
	if (tree[idx][2] != '.')			// Right.
		In_order(tree[idx][2] - 65);
}

void Post_order(int idx)				// To traverse tree in post order.
{
	if (tree[idx].size() == 0)		// Base case.
		return;							// [No node.]

	if (tree[idx][1] != '.')			// Left.
		Post_order(tree[idx][1] - 65);
	if (tree[idx][2] != '.')			// Right.
		Post_order(tree[idx][2] - 65);
	if (tree[idx][0] != '.')			// Root.
		cout << tree[idx][0];
}

int main(void)
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);	cout.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++)
	{
		char pr, lf, rt;					
		cin >> pr >> lf >> rt;					// parent, left_child, right_child.
		tree[pr - 65].push_back(pr);
		tree[pr - 65].push_back(lf);
		tree[pr - 65].push_back(rt);
	}

	Pre_order(0);
	cout << "\n";
	In_order(0);
	cout << "\n";
	Post_order(0);
	cout << "\n";
}
