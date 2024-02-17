#include<bits/stdc++.h>
using namespace std;
/*Print BST elements in given range*/ 

struct Node
{
    int data;
    struct Node *left, *right;
};

class Solution {
  public:
    void inorder(Node * root, int low,int high,vector<int>& ans){
        if(root==NULL)return;
        inorder(root->left,low,high,ans);
        if(root->data<=high && root->data>=low){
            ans.push_back(root->data);
        }
        inorder(root->right,low,high,ans);
    }
    vector<int> printNearNodes(Node *root, int low, int high) {
        //code here   
        vector<int> ans;
        inorder(root,low,high,ans);
        return ans;
        
        
    }
};

int main(){
   return 0;
}