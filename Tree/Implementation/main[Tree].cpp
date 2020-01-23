#include<iostream>
#include "Tree[List].h"

using namespace std;

int main(void)
{
	Binary_tree *bt1 = Make_Node();
	Binary_tree *bt2 = Make_Node();
	Binary_tree *bt3 = Make_Node();
	Binary_tree *bt4 = Make_Node();
	Binary_tree *bt5 = Make_Node();
	Binary_tree *bt6 = Make_Node();
	Binary_tree *bt7 = Make_Node();

	Set_Data(bt1, 1);
	Set_Data(bt2, 2);
	Set_Data(bt3, 3);
	Set_Data(bt4, 4);
	Set_Data(bt5, 5);
	Set_Data(bt6, 6);
	Set_Data(bt7, 7);

	Set_Left(bt1, bt2);
	Set_Right(bt1, bt3);
	Set_Left(bt2, bt4);
	Set_Right(bt2, bt5);
	Set_Left(bt3, bt6);

	Preorder(bt1);
	cout << endl;
	Inorder(bt1);
	cout << endl;
	Postorder(bt1);
	cout << endl;
}