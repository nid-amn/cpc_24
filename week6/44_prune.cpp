#include<bits/stdc++.h>
using namespace std;
/*Remove all nodes which don’t lie in any path with sum>= k*/
struct Node
{
    int data;
    struct Node *left, *right;
};

struct Node *prune(struct Node *root, int sum)
{
    if (root == NULL) return NULL;
 
    root->left = prune(root->left, sum - root->data);
    root->right = prune(root->right, sum - root->data);
 
    // If we reach leaf whose data is smaller than sum,
    // we delete the leaf. An important thing to note
    // is a non-leaf node can become leaf when its
    // children are deleted.
    if (root->left==NULL && root->right==NULL)
    {
        if (root->data < sum)
        {
            free(root);
            return NULL;
        }
    }
 
    return root;
}
int main(){
   return 0;
}