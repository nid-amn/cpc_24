/*Check if a given Binary Tree is Sum Tree*/
#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	node* left;
	node* right;
};

int isLeaf(node *node)
{
	if(node == NULL)
		return 0;
	if(node->left == NULL && node->right == NULL)
		return 1;
	return 0;
}

int isSumTree(node* node)
{
	int ls;
	int rs; 
	if(node == NULL || isLeaf(node))
		return 1;

	if( isSumTree(node->left) && isSumTree(node->right))
	{
		if(node->left == NULL)
			ls = 0;
		else if(isLeaf(node->left))
			ls = node->left->data;
		else
			ls = 2 * (node->left->data);
		if(node->right == NULL)
			rs = 0;
		else if(isLeaf(node->right))
			rs = node->right->data;
		else
			rs = 2 * (node->right->data);

		return(node->data == ls + rs);
	}
	return 0;
}


int main()
{
	return 0;
}

