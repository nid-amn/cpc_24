#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int x)
    {
        data = x;
        left = right = NULL;
    }
};

int c = 0;
Node* kthSmallest(Node* root, int& k)
{
    // base case
    if (root == NULL)
        return NULL;
 
    Node* left = kthSmallest(root->left, k);
    if (left != NULL)
        return left;
 
    c++;
    if (c == k)
        return root;

    return kthSmallest(root->right, k);
}

//------

int kthSmalleststack(Node* root, int k)
{
    stack<Node*> s;
    while (root != NULL || !s.empty()) {

        while (root != NULL) {
            s.push(root);
            root = root->left;
        }

        root = s.top();
        s.pop();
 
        if (--k == 0)
            return root->data;
        root = root->right;
    }
    return -1;
}
int main(){
   return 0;
}