#include<bits/stdc++.h>
using namespace std;
/*Traversal
1. DFS
2. BFS
3. level order
4. boundary order
5. Diagonal Traversal*/

struct Node {
    int data;
    struct Node *left, *right;
}; 
void printInorder(struct Node* node)
{
    if (node == NULL)
        return;
    printInorder(node->left);
    cout << node->data << " ";
    printInorder(node->right);
}

void printPreorder(struct Node* node)
{
    if (node == NULL)
        return;
    cout << node->data << " ";
    printPreorder(node->left);
    printPreorder(node->right);
}
void printPostorder(struct Node* node)
{
    if (node == NULL)
        return;
    printPostorder(node->left);
    printPostorder(node->right);
    cout << node->data << " ";
}


int main(){
   return 0;
}
