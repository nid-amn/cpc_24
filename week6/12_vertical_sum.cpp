#include<bits/stdc++.h>
using namespace std;
/*Vertical sum*/ 
struct Node{
    int data;
    Node *left,*right;
};
class Solution{
  public:
    void get_sum(Node *node,int sum, map<int,int> &mp){
        if(node==NULL)return;
        get_sum(node->left,sum-1,mp);
        mp[sum]+=node->data;
        get_sum(node->right,sum+1,mp);
        
    }
    
    vector <int> verticalSum(Node *root) {
        // add code here.
        map<int,int>mp;
        vector<int>ans;
        get_sum(root,0,mp);
        for (auto it:mp)
        {
            ans.push_back(it.second);
        }
        return ans;
    }

    
};
int main(){
   return 0;
}
