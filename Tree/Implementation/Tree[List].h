#ifndef _List_Tree_H			// if "_name.h" file is not defined,
#define _List_Tree_H			// define "_name.h" file.	Then, do compile below code.

struct Node						// Node.
{
	int data;
	struct Node *left;
	struct Node *right;
};

typedef struct Node Binary_tree;

Binary_tree *Make_Node(void);
int Get_Data(Binary_tree *bt);
void Set_Data(Binary_tree *bt, int key);
Binary_tree *Get_Left(Binary_tree *bt);
Binary_tree *Get_Right(Binary_tree *bt);
void Set_Left(Binary_tree *main, Binary_tree *sub);
void Set_Right(Binary_tree *main, Binary_tree *sub);
void Preorder(Binary_tree *bt);
void Inorder(Binary_tree *bt);
void Postorder(Binary_tree *bt);

#else									// if not, do compile below code.

#endif