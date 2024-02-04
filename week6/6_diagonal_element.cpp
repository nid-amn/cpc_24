#include<bits/stdc++.h>
using namespace std;
 
struct Node {
    int data;
    Node *left, *right;
};
 
Node* newNode(int data)
{
    Node* node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return node;
}
 
vector<vector<int> > result;
void diagonalPrint(Node* root)
{
    if (root == NULL)
        return;
 
    queue<Node*> q;
    q.push(root);
 
    while (!q.empty()) {
        int size = q.size();
        vector<int> answer;
 
        while (size--) {
            Node* temp = q.front();
            q.pop();
 
            // traversing each component;
            while (temp) {
                answer.push_back(temp->data);
 
                if (temp->left)
                    q.push(temp->left);
 
                temp = temp->right;
            }
        }
        result.push_back(answer);
    }
}
int main(){
   return 0;
}