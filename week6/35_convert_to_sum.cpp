#include<bits/stdc++.h>
using namespace std;
 
class node 
{ 
    public:
int data; 
node *left; 
node *right; 
}; 
 
int toSumTree(node *Node) 
{ 
    if(Node == NULL) 
    return 0; 
 
    int old_val = Node->data; 
    Node->data = toSumTree(Node->left) + toSumTree(Node->right); 
    return Node->data + old_val; 
} 

//---
int toSumTree(node* Node)
{
    if (Node != NULL) {
        int l = toSumTree(Node->left);
        int r = toSumTree(Node->right);
        int temp = Node->data;
        Node->data = l + r;
        return temp + l + r;
    }
    else
        return 0;
}
int main(){
   return 0;
}