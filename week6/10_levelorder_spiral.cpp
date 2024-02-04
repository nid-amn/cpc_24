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

//Function to return a list containing the level order traversal in spiral form.
vector<int> findSpiral(Node *root)
{
    //Your code here
    vector<int>ans;
    stack<struct Node*>s1;
    stack<struct Node*>s2;
    s1.push(root);
    while(!s1.empty() || !s2.empty()){
        while(!s1.empty()){
            struct Node* temp=s1.top();
            ans.push_back(temp->data);
            s1.pop();
            if(temp->right)
            s2.push(temp->right);
            if(temp->left)
            s2.push(temp->left);
            
        }
        while(!s2.empty()){
            struct Node * temp=s2.top();
            s2.pop();
            ans.push_back(temp->data);
            if(temp->left)
            s1.push(temp->left);
            if(temp->right)
            s1.push(temp->right);
        }
    }
    return ans;
    
}
int main(){
   return 0;
}