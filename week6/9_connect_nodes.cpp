#include<bits/stdc++.h>
using namespace std;
 
class Node {
 public:
    int data;
    Node *left, *right, *nextRight;
    Node(int item){
        data = item;
        left = right = nextRight = nullptr;
    }
};
   
class BinaryTree{
    public:
    Node *root;
    BinaryTree(){
      root = nullptr;
    }
  
    void connectRecur(Node *p) {
        // Base case
        if (p == NULL) return;
        /* Before setting nextRight of left and right children, set nextRight
           of children of other nodes at same level (because we can access
           children of other nodes using p's nextRight only) */
        if (p->nextRight)
            connectRecur(p->nextRight);
  
        /* Set the nextRight pointer for p's left child */
        if (p->left) {
            if (p->right) {
                p->left->nextRight = p->right;
                p->right->nextRight = getNextRight(p);
            }else{
                p->left->nextRight = getNextRight(p);
            }
            // Recursively call for next level nodes.Note that we call only
            // left child. The call for left child will call for right child
            connectRecur(p->left);
        }
  
        /* If left child is NULL then first node of next level will either be
           p->right or getNextRight(p) */
        else if (p->right) {
            p->right->nextRight = getNextRight(p);
            connectRecur(p->right);
        } else
            connectRecur(getNextRight(p));
    }
  
    // This function returns the leftmost child of nodes at the same level 
    // as p. This function is used to getNExt right of p's right childIf
    // right child of p is NULL then this can also be used for the left child
    Node *getNextRight(Node *p) {
        Node *temp = p->nextRight;
  
        /* Traverse nodes at p's level and find and return
         the first node's first child */
        while (temp) {
            if (temp->left)
                return temp->left;
            if (temp->right)
                return temp->right;
            temp = temp->nextRight;
        }
  
        // If all the nodes at p's level are leaf nodes then return NULL
        return nullptr;
    }
  
    void connect() {
        // Set the nextRight for root
        root->nextRight = nullptr;
  
        // Set the next right for rest of the
        // nodes (other than root)
        connectRecur(root);
    }
};
int main(){
   return 0;
}