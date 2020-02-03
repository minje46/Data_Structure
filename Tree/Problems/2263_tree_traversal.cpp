#include <iostream>

#define MAX 100001

using namespace std;

int N;														// N = The number of nodes.
int in_order[MAX], post_order[MAX];			// The memory of input data.
int idx[MAX];

void Pre_order(int in_lf, int in_rt, int post_lf, int post_rt)			// To traverse in pre order.
{
	if (in_lf > in_rt || post_lf > post_rt)			// Exception.
		return;

	int root = post_order[post_rt];
	cout << root << " ";
	Pre_order(in_lf, idx[root] - 1, post_lf, post_lf + (idx[root] - in_lf) - 1);			// Left subtree.
	Pre_order(idx[root] + 1, in_rt, post_lf + (idx[root] - in_lf), post_rt - 1);			// Right subtree.
}

int main(void)
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);	cout.tie(0);

	cin >> N;
	for (int i = 0; i < N; i++)
		cin >> in_order[i];
	for (int i = 0; i < N; i++)
		cin >> post_order[i];

	for (int i = 0; i < N; i++)
		idx[in_order[i]] = i;

	Pre_order(0, N - 1, 0, N - 1);

	cout << endl;
}