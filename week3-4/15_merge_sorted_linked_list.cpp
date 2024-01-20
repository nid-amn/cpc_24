/*merge sorted kinked list:
1. brute force
2. dummy node
3. recursion
4. by reversing the list
*/
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

//Function to merge two sorted linked list.
Node* sortedMerge(Node* head1, Node* head2)  
{  
    // code here
    Node* head=NULL;
    if(!head1)return head2;
    else if(!head2)return head1;
    
    if(head1->data<=head2->data){
        head=head1;
        head->next=sortedMerge(head1->next,head2);
    }
    else{
        head=head2;
        head->next=sortedMerge(head1,head2->next);
    }
    
    
    return head;
}
int main(){
   return 0;
}