#include<bits/stdc++.h>
using namespace std;

/*Maximum sum leaf to root path*/
struct Node
{
    int data;
    Node* left, * right;
}; 

class Solution{
    public:
    
    int maxPathSum(Node* root)
    {
        //code here
        if(root == NULL) return 0;
        int mx = max((root->data + maxPathSum(root->left)),(root->data + maxPathSum(root->right)));
    
        if(root->data == mx) return  min((root->data + maxPathSum(root->left)),(root->data + maxPathSum(root->right)));
        
        else return mx;
        
    }
};
int main(){
   return 0;
}