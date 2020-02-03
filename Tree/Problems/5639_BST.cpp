#include<iostream>
#include<cstdio>
#pragma warning(disable:4996)
#define MAX 100001

using namespace std;

struct Tree							// The memory of tree node.
{
	int left = 0;
	int right = 0;
};

Tree tree[MAX];							// tree = The memory of input data as tree.			

void Post_order(int node)				// To traverse in post order.
{
	if (tree[node].left != 0)			// Left.
		Post_order(tree[node].left);
	if (tree[node].right != 0)			// Right.
		Post_order(tree[node].right);
	printf("%d\n", node);				// Root.
}

int main(void) 
{
	int root, value;
	scanf("%d", &root);
	while (scanf("%d", &value) != EOF)
	{
		int cur = root;							
		while (true)								// Find the position and Make a tree.
		{
			if (cur > value)					// Left sub tree.
			{
				if (tree[cur].left != 0)		// Left child exists.
					cur = tree[cur].left;
				else								
				{
					tree[cur].left = value;
					break;
				}
			}
			else									// Right sub tree.	
			{
				if (tree[cur].right != 0)		// Right child exists.
					cur = tree[cur].right;
				else 
				{
					tree[cur].right = value;
					break;
				}
			}
		}
	}

	Post_order(root);
}
