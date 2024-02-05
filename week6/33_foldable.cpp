// Foldable or not
#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
	int key;
	Node *left;
	Node *right;

	Node(int key)
	{
		this->key = key;
		left = right = NULL;
	}
};

class FoldableTrees
{
public:
	Node *root = NULL;

	bool isFoldable()
	{

		queue<Node *> q;

		if (root != NULL)
		{
			q.push(root->left);
			q.push(root->right);
		}

		while (!q.empty())
		{


			Node *p = q.front();
			q.pop();
			Node *r = q.front();
			q.pop();

			if (p == NULL && r == NULL)
				continue;

			if ((p == NULL && r != NULL) || (p != NULL && r == NULL))
				return false;

			q.push(p->left);
			q.push(r->right);
			q.push(p->right);
			q.push(r->left);
		}

		return true;
	}

};



bool IsFoldableUtil(Node* n1, Node* n2)
{
    /* If both left and right subtrees are NULL,
    then return true */
    if (n1 == NULL && n2 == NULL) {
        return true;
    }
 
    /* If one of the trees is NULL and other is not,
    then return false */
    if (n1 == NULL || n2 == NULL) {
        return false;
    }
 
    /* Otherwise check if left and right subtrees are
    mirrors of their counterparts */
    return IsFoldableUtil(n1->left, n2->right)
           && IsFoldableUtil(n1->right, n2->left);
}
bool IsFoldable(Node* root)
{
    if (root == NULL) {
        return true;
    }
 
    return IsFoldableUtil(root->left, root->right);
}

int main()
{
}
