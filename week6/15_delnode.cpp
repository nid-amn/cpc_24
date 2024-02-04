#include<bits/stdc++.h>
using namespace std;
 
struct Node
{
	int data;
	Node* left, *right;
};

// you are required to complete this function
void preOrderTraversal(Node* root, int key, int val) {
    if(root == NULL)
        return;
    
    // processing...
    if(root->data == key) {
        root->data = val;
        return;
    }
    
    preOrderTraversal(root->left, key, val);
    preOrderTraversal(root->right, key, val);
}
struct Node* deletionBT(struct Node* root, int key)
{
    // code here
    queue<Node*>q;
    q.push(root);
    Node* parentNode=NULL;
    int valtodel=0;
    while(!q.empty()){
        int x=q.size();
        while(x--){
            Node* temp=q.front();
            q.pop();
            
            if(temp->left){
                q.push(temp->left);
                parentNode = temp;
                valtodel= temp->left->data;
            }
            if(temp->right){
                q.push(temp->right);
                parentNode = temp;
                valtodel= temp->right->data;
            }
        }
        
    }
    if(parentNode->right) {
        parentNode->right = NULL;
    }
    else if(parentNode->left) {
        parentNode->left = NULL;
    }
    
    preOrderTraversal(root, key, valtodel);
    
    return root;
    
    
}

int main(){
   return 0;
}