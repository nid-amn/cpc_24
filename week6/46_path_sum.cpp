#include<bits/stdc++.h>
using namespace std;

/*Root to leaf path sum
Given a binary tree and an integer s, 
check whether there is a root-to-leaf path with its sum as s.*/

struct Node
{
    int data;
    Node* left, * right;
}; 

class Solution
{
    public:
    bool hasPathSum(Node *root, int s) {
    // Your code here
        
        if(root == NULL)return false;
        if(root->left==NULL && root->right==NULL && s-root->data==0)return true;
        bool left=hasPathSum(root->left,s-root->data);
        bool right=hasPathSum(root->right,s-root->data);
        
        return left||right;
    
    }
};
int main(){
   return 0;
}