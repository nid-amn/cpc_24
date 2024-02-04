#include<bits/stdc++.h>
using namespace std;
/*Odd even level difference*/

struct Node
{
    int data;
    Node* left;
    Node* right;
};

class Solution{
  public:
    /*You are required to complete this function*/
    int getLevelDiff(Node *root)
    {
       //Your code here
       int odd=0,even=0;
       queue<Node*>q1;
       queue<Node*>q2;
       q1.push(root);
       while(!q1.empty() || !q2.empty()){
           while(!q1.empty()){
               Node *temp=q1.front();
               q1.pop();
               odd+=temp->data;
               if(temp->left)
               q2.push(temp->left);
               if(temp->right)
               q2.push(temp->right);
           }
           while(!q2.empty()){
               Node *temp=q2.front();
               q2.pop();
               even+=temp->data;
               if(temp->left)
               q1.push(temp->left);
               if(temp->right)
               q1.push(temp->right);
           }
       }
       return odd-even;
    }
};

int main(){
   return 0;
}