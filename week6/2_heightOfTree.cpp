/*Find the Maximum Depth or Height of given Binary Tree*/
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

class Solution{
    public:
    //Function to find the height of a binary tree.
    int height(struct Node* node){
        // code here 
        if(node==NULL)return 0;
        
        int count=max(height(node->left)+1,height(node->right)+1);
        return count;
    }
};
int main(){
   return 0;
}