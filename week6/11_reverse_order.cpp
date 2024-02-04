#include<bits/stdc++.h>
using namespace std;

/*Reverse Level Order Traversal
using stack and queue*/
struct Node
{
    int data;
    Node* left;
    Node* right;
};

vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int>ans;
    queue<Node *>q;
    stack<Node *>s;
    q.push(root);
    while(!q.empty()){
        Node* temp=q.front();
        q.pop();
        s.push(temp);
        if(temp->right)
        q.push(temp->right);
        if(temp->left)
        q.push(temp->left);
       
    }
    while(!s.empty()){
        Node*temp=s.top();
        s.pop();
        ans.push_back(temp->data);
    }
    return ans;
}
int main(){
   return 0;
}