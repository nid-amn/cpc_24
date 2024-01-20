#include<bits/stdc++.h>
using namespace std;

struct Node 
{
	int data;
	struct Node *next;
	
	Node(int x){
	    int data = x;
	    next = NULL;
	}
};

class Solution{
     public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        // Your code here
        if(head == NULL||head->next == NULL||k == 0) return head;
        int len=1; // the head itself is a node
        Node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
            len++;
        }
        temp->next=head;
        k=k%len;
        while(k>0){
            temp=temp->next;
            head=head->next;
            k--;
        }
        temp->next=NULL;
        return head;
        
    }
};
int main(){
   return 0;
}