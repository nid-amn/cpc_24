#include<bits/stdc++.h>
using namespace std;
/*Leave at same level*/

struct Node
{
    int data;
    Node* left;
    Node* right;
};

class Solution{
  public:
    /*You are required to complete this method*/
    bool levels(Node* root,int level, int *leaflevel){
        if(root==NULL)return true;
        
        if(root->left==NULL && root->right==NULL){
            if(*leaflevel==0){
                *leaflevel=level;
                return true;
            }
            return (level==*leaflevel);
        } 
        return(levels(root->left,level+1,leaflevel)&&levels(root->right,level+1,leaflevel));
    }
    bool check(Node *root)
    {
        //Your code here
        int level=0,leaflevel=0;
        return levels(root,level,&leaflevel);
        
    }
};
int main(){
   return 0;
}