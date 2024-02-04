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
    // Function to get the maximum width of a binary tree.
    int getMaxWidth(Node* root) {

        // Your code here
        if(root==NULL)return 0;
        
        int res=0;
        
        queue<Node*>q;
        q.push(root);
        while(!q.empty()){
            int count=q.size();
            res=max(count,res);
            
            while(count--){
                Node* temp = q.front();
                q.pop();
                
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
            }
            
        }
        return res;
    }
};

int main(){
   return 0;
}