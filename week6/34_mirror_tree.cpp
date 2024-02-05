#include<bits/stdc++.h>
using namespace std;
 
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
 
void mirror(struct Node* node)
{
    if (node == NULL)
        return;
    else {
        struct Node* temp;
        mirror(node->left);
        mirror(node->right);

        temp = node->left;
        node->left = node->right;
        node->right = temp;
    }
}

//---


void mirror(Node* root)
{
    if (root == NULL)
        return;
 
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* curr = q.front();
        q.pop();
        swap(curr->left, curr->right);
 
        if (curr->left)
            q.push(curr->left);
        if (curr->right)
            q.push(curr->right);
    }
}
int main(){
   return 0;
}