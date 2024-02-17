#include<bits/stdc++.h>
using namespace std;
/*Two of the nodes of a Binary Search Tree (BST) are swapped. 
Fix (or correct) the BST by swapping them back. 
Do not change the structure of the tree.*/

struct Node
{
    int data;
    struct Node *left, *right;
};
class Solution {
  public:
    //push the elements in order in an array
    void Inorder(Node* root,vector<Node*>& nodes)
      {
        if(root==NULL) return;
        Inorder(root->left,nodes);
        nodes.push_back(root);
        Inorder(root->right,nodes);
      }
    //find the element not in order then swap it
    struct Node *correctBST(struct Node *root) {
        vector<Node*> nodes;
        Inorder(root,nodes);
        Node* first=NULL,*second=NULL;
        for(int i=1;i<nodes.size();i++)
        {
            if(nodes[i-1]->data>nodes[i]->data)
            {
                if(first==NULL)
                {
                   first=nodes[i-1];
                }
                second=nodes[i];
            }
        }
        int temp=first->data;
        first->data=second->data;
        second->data=temp;
        
        return root;
    }
};
int main(){
   return 0;
}