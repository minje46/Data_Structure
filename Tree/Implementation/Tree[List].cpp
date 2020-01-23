#include<iostream>
#include<malloc.h>
#include "Tree[List].h"

using namespace std;

Binary_tree *Make_Node(void)					// To make and initialize a node for tree.
{
	Binary_tree *new_node = (Binary_tree *)malloc(sizeof(Binary_tree));
	new_node->left = NULL;
	new_node->right = NULL;
	return new_node;
}

int Get_Data(Binary_tree *bt)					// To access the data of binary tree.
{
	return bt->data;
}

void Set_Data(Binary_tree *bt, int key)		// To set the value of tree.
{
	bt->data = key;
}

Binary_tree *Get_Left(Binary_tree *bt)		// To access the left child node.
{
	return bt->left;
}

Binary_tree *Get_Right(Binary_tree *bt)		// To access the right child node.
{
	return bt->right;
}

void Set_Left(Binary_tree *main, Binary_tree *sub)			// To set the left child node.
{
	if (main->left != NULL)		// Exception.
		free(main->left);				// [Left child already exists.]

	main->left = sub;
}

void Set_Right(Binary_tree *main, Binary_tree *sub)		// To set the right child node.
{
	if (main->right != NULL)		// Exception.
		free(main->right);			// [Left child already exists.]

	main->right = sub;
}

void Preorder(Binary_tree *bt)					// To traversal in preorder.
{
	if (bt == NULL)					// Exception. 
		return;							// [Node is null.]		

	cout << bt->data << " ";
	Preorder(bt->left);
	Preorder(bt->right);
}

void Inorder(Binary_tree *bt)						// To traversal in inorder.
{
	if (bt == NULL)					// Exception. 
		return;							// [Node is null.]		

	Inorder(bt->left);
	cout << bt->data << " ";
	Inorder(bt->right);
}

void Postorder(Binary_tree *bt)					// To traversal in postorder.
{
	if (bt == NULL)					// Exception. 
		return;							// [Node is null.]		

	Postorder(bt->left);
	Postorder(bt->right);
	cout << bt->data << " ";
}