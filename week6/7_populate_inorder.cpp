#include<bits/stdc++.h>
using namespace std;
 
struct Node {
	int data;
	struct Node *left, *right,*next;
};
class Solution
{
public:
    void push(Node* root,vector<Node*> &v){
        if(!root){
            return; 
        }
        push(root->left,v);
        v.push_back(root);
        push(root->right,v);
    }

    void populateNext(Node *root)
    {
        //code here
        vector<Node*>v;
        push(root,v);
        
        for(int i=0;i<v.size()-1;i++){
            v[i]->next=v[i+1];
        }
    }
};
int main(){
   return 0;
}