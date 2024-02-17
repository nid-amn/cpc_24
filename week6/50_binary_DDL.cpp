#include<bits/stdc++.h>
using namespace std;
 
/*Binary Tree to DLL*/

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

class Solution
{
    public:  
    void dll(Node * root,Node * &head)
    {
        if(root == NULL)
        {
            return;
        }
        
        dll(root->right,head);
        root->right = head;
        if(head != NULL)
        {
            head->left = root;
        }
        head = root;
        dll(root->left,head);
    }
        
    Node * bToDLL(Node *root)
    {
        Node * head = NULL;
        dll(root,head);
        return head;
    }
};
int main(){
   return 0;
}