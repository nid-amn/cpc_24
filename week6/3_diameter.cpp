#include<bits/stdc++.h>
using namespace std;
 
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;

    Node(int x){
        data = x;
        left = right = NULL;
    }
};

class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int height(Node *root){
        if(root==NULL)return 0;
        return 1+max(height(root->left),height(root->right));
    }
    int diameter(Node* root) {
        // Your code here
        if(root==NULL)return 0;
        int l_h=height(root->left);
        int r_h=height(root->right);
        
        int l_d=diameter(root->left);
        int r_d=diameter(root->right);
        
        return max(l_h+r_h+1,max(l_d,r_d));
    }
};

class Solution {//takes less time
  public:
    // Function to return the diameter of a Binary Tree.
    int act(Node *root,int *res){
        if(root==NULL){
            return 0;
        }
        int lh=act(root->left,res);
        int rh=act(root->right,res);
        *res=max(*res,lh+rh+1);
        return 1+max(lh,rh);
    }
    int diameter(Node* root) {
        // Your code here
        int res=0;
        act(root,&res);
        return res;
    }
};

int main(){
   return 0;
}