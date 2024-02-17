#include<bits/stdc++.h>
using namespace std;
/*Root to Leaf Paths*/
struct Node
{
    int data;
    Node* left;
    Node* right;
};

 void solve(Node* root,vector<vector<int>> &ans,vector<int>temp){
     if(!root) return ;
     temp.push_back(root->data);
     if(!root->left && !root->right){
         ans.push_back(temp);
         temp.pop_back();
         return ;
     }
     solve(root->left,ans,temp);
     solve(root->right,ans,temp);
     temp.pop_back();
     
 }
vector<vector<int>> Paths(Node* root)
{ 
    vector<vector<int>>  ans; vector<int>temp;
    solve(root,ans,temp);
    return ans;  
}
int main(){
   return 0;
}