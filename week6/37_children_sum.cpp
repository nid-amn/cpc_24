/*children sum property */
#include <bits/stdc++.h>
using namespace std;

struct node {
	int data;
	struct node* left;
	struct node* right;
};

int isSumProperty(struct node* node)
{
	int sum = 0;

	if (node == NULL
		|| (node->left == NULL && node->right == NULL))
		return 1;
	else {

		if (node->left != NULL)
			sum += node->left->data;

		if (node->right != NULL)
			sum += node->right->data;

		return ((node->data == sum)
				&& isSumProperty(node->left)
				&& isSumProperty(node->right));
	}
}

//-------
    int isSumProperty(node *root)
    {
     queue<node*>q;
     q.push(root);
     q.push(NULL);
     while(!q.empty())
     {
         node* curr=q.front();q.pop();
         if(curr==NULL)
         {
             if(!q.empty())
             q.push(NULL);continue;
         }

         int sum=0;
         if(curr->left)
         {
             q.push(curr->left);
             sum+=curr->left->data;
         }
         if(curr->right)
         {
             q.push(curr->right);
             sum+=curr->right->data;
         }
         if(sum!=curr->data&&sum!=0)
         return 0;
     }
     return 1;
    }

int main()
{
}

