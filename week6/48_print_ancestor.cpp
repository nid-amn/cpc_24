#include<bits/stdc++.h>
using namespace std;

struct node
{
   int data;
   struct node* left;
   struct node* right;
};

bool printAncestors(struct node *root, int target)
{
    stack<node*> st;
    while (root || !st.empty()) {
        while (root && root->data != target) {
            st.push(root);
            root = root->left;
        }
         
        if (root && root->data == target)
            break;
         
        if (!st.empty() && st.top()->right == NULL) {
            root = st.top();
            st.pop();
             
            while (!st.empty() && st.top()->right == root) {
                root = st.top();
                st.pop();
            }
        }
         
        root = (!st.empty()) ? st.top()->right : NULL;
    }
     
    if (!st.empty()) {
        while (!st.empty()) {
            cout << st.top()->data << " ";
            st.pop();
        }
        return true;
    }
     
    return false;
}

bool printAncestors(struct node *root, int target)
{
  /* base cases */
  if (root == NULL)
     return false;
 
  if (root->data == target)
     return true;
 
  /* If target is present in either left or right subtree of this node,
     then print this node */
  if ( printAncestors(root->left, target) ||
       printAncestors(root->right, target) )
  {
    cout << root->data << " ";
    return true;
  }
 
  /* Else return false */
  return false;
}

int main(){
   return 0;
}