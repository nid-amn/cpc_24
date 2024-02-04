#include<bits/stdc++.h>
using namespace std;
 
//level order

struct Node {
	int data;
	struct Node *left, *right;
};

void printCurrentLevel(struct Node* root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        cout << root->data << " ";
    else if (level > 1) {
        printCurrentLevel(root->left, level - 1);
        printCurrentLevel(root->right, level - 1);
    }
}

int height(Node* node)
{
    if (node == NULL)
        return 0;
    else {
         
        int lheight = height(node->left);
        int rheight = height(node->right);
 
        if (lheight > rheight) {
            return (lheight + 1);
        }
        else {
            return (rheight + 1);
        }
    }
}

void printLevelOrder(Node* root)
{
    int h = height(root);
    int i;
    for (i = 1; i <= h; i++)
        printCurrentLevel(root, i);
}

void printLevelOrderqueue(Node* root)
{
    if (root == NULL)
        return;
    queue<Node*> q;
    q.push(root);
 
    while (q.empty() == false) {
         
        Node* node = q.front();
        cout << node->data << " ";
        q.pop();

        if (node->left != NULL)
            q.push(node->left);
 
        if (node->right != NULL)
            q.push(node->right);
    }
}

int main(){
   return 0;
}