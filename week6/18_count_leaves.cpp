#include<bits/stdc++.h>
using namespace std;
 
struct Node
{
    int data;
    Node* left;
    Node* right;
};

/* Should return count of leaves. For example, return
    value should be 2 for following tree.
         10
      /      \ 
   20       30 */

int countLeaves(Node* root)
{
  // Your code here
  if(root==NULL)return 0;
  if(root->left==NULL && root->right==NULL){
      return 1;
  }
  return countLeaves(root->left)+countLeaves(root->right);

}
int main(){
   return 0;
}