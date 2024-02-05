/*Convert an arbitrary Binary Tree to a tree that holds Children Sum Property*/
#include <iostream>
#include <queue>
using namespace std;

class node 
{
public:
	int data; 
	node* left; 
	node* right;
	
	node(int data)
	{
		this->data = data; 
		this->left = NULL; 
		this->right = NULL;
	}
};

void convertTree(node* root)
{
	if (root == NULL || (root->left == NULL && root->right == NULL))
		return;

	queue<node*> q;
	q.push(root);

	while (!q.empty())
	{
		node* current = q.front();
		q.pop();

		int left_data = 0, right_data = 0;

		if (current->left != NULL)
		{
			q.push(current->left);
			left_data = current->left->data;
		}

		if (current->right != NULL)
		{
			q.push(current->right);
			right_data = current->right->data;
		}

		int diff = left_data + right_data - current->data;

		if (diff > 0)
			current->data += diff;

		if (diff < 0)
		{
			if (current->left != NULL)
				current->left->data += -diff;
			else if (current->right != NULL)
				current->right->data += -diff;
		}
	}
}


int main() 
{
	return 0; 
}
