#include<bits/stdc++.h>
using namespace std;
 
struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        // Add code here
        Node* temp=head;
        int count[3]={0,0,0};
        while(temp){
            count[temp->data]++;
            temp=temp->next;
        }
        
        temp=head;
        int i=0;
        while(temp){
            if(count[i]==0){
                i++;
            }
            else{
                temp->data=i;
                count[i]--;
                temp=temp->next;
            }
        }
        return head;
        
    }
};

int main(){
   return 0;
}