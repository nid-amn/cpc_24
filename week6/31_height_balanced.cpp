/*How to determine if a binary tree is height-balanced*/
// C++ code to implement the approach

#include <bits/stdc++.h>
using namespace std;

// Structure of a tree node
struct Node {
	int key;
	struct Node* left;
	struct Node* right;
	Node(int k)
	{
		key = k;
		left = right = NULL;
	}
};

int isBalanced(Node* root)
{
	if (root == NULL)
		return 0;
	int lh = isBalanced(root->left);
	if (lh == -1)
		return -1;
	int rh = isBalanced(root->right);
	if (rh == -1)
		return -1;

	if (abs(lh - rh) > 1)
		return -1;
	else
		return max(lh, rh) + 1;
}

//----------

int height(Node* node)
{
    if (node == NULL)
        return 0;

    return 1 + max(height(node->left), height(node->right));
}
 
bool isBalanced1(Node* root)
{
    int lh;
    int rh;
    if (root == NULL)
        return 1;
    lh = height(root->left);
    rh = height(root->right);
 
    if (abs(lh - rh) <= 1 && isBalanced1(root->left)
        && isBalanced1(root->right))
        return 1;
    return 0;
}

// Driver code
int main()
{
}
