#include<bits/stdc++.h>
using namespace std;
/*Remove BST keys outside given range*/ 

struct Node
{
    int data;
    Node* left;
    Node* right;
};

class Solution {
    public:
    Node* removekeys(Node* root, int l, int r) {
        // code here
        if(root == NULL) return NULL;
        
        root->left=removekeys(root->left,l,r);
        root->right=removekeys(root->right,l,r);
        
        if(root->data<l){
            Node* temp = root->right;
            delete(root);
            return temp;
        }
        
        if(root->data>r){
            Node* temp = root->left;
            delete(root);
            return temp;
        }
        return root;
        
    }
};

int main(){
   return 0;
}