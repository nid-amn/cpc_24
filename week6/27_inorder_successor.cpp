#include<bits/stdc++.h>
using namespace std;
 
struct node {
	int data;
	struct node* left;
	struct node* right;
	struct node* parent;
};

struct node* minValue(struct node* node);

struct node* inOrderSuccessor(
	struct node* root,
	struct node* n)//looking for n inorder successor
{

	if (n->right != NULL)
		return minValue(n->right);

    /*if n is right of the parent node
    look for the ancestor*/
	struct node* p = n->parent;
	while (p != NULL && n == p->right) {
		n = p;
		p = p->parent;
	}
	return p;
}

struct node* minValue(struct node* node)
{
	struct node* current = node;

	while (current->left != NULL) {
		current = current->left;
	}
	return current;
}


int main()
{
	return 0;
}

