#include<bits/stdc++.h>
using namespace std;
/*Minimum element in BST*/
struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
// Utility function to create a new Tree Node
Node* newNode(int val) {
    Node* temp = new Node;
    temp->data = val;
    temp->left = NULL;
    temp->right = NULL;

    return temp;
}

int minValue(Node* root) {
    // Code here
    queue<Node*>q;
    if(root==NULL)return -1;
    q.push(root);
    int res=INT_MAX;
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        res=min(res,temp->data);
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }
    }
    return res;
    
}
int main(){
   return 0;
}
