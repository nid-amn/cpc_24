#include <bits/stdc++.h>
using namespace std;
/*Add all greater values to every node in a given BST*/
class Node {
public:
	int data;
	Node *left, *right;
};

void modifyBSTUtil(Node* root, int* sum)
{
	// Base Case
	if (root == NULL)
		return;
	modifyBSTUtil(root->right, sum);
	*sum = *sum + root->data;
	root->data = *sum;

	modifyBSTUtil(root->left, sum);
}

void modifyBST(Node* root)
{
	int sum = 0;
	modifyBSTUtil(root, &sum);
}




int main()
{

}

