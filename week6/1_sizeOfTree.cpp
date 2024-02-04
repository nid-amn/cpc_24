/*Size of Binary Tree*/
#include<bits/stdc++.h>
using namespace std;

 struct Node
 {
     int data;
     Node* left;
     Node* right;
};

int getSize(Node* node)
{
   // Your code here
   if(node==NULL){
       return 0;
   }
   return getSize(node->left)+getSize(node->right)+1;
   
}
int main(){
   return 0;
}