#include<bits/stdc++.h>
using namespace std;
/*Intersection of two sorted linked lists*/
 struct ListNode {
    int data;
    ListNode *next;
    ListNode(int x) :data(x), next(NULL) {}
};
 
class Solution
{
    public:
    Node* findIntersection(Node* head1, Node* head2)
    {
        Node* ptr1=head1;
        Node* ptr2=head2;
        Node* intersection = nullptr;
        Node* tail = nullptr;
        
        while(ptr1!=NULL && ptr2!=NULL){
            if(ptr1->data == ptr2->data){
                if (intersection == nullptr) {
                    Node* newNode = new Node(ptr1->data);
                    intersection = newNode;
                    tail = newNode;
                } else {
                    Node* newNode = new Node(ptr1->data);
                    tail->next = newNode;
                    tail = newNode;
                }
                ptr1 = ptr1->next;
                ptr2 = ptr2->next;
            }
            
            else if (ptr1->data < ptr2->data) {
                ptr1 = ptr1->next;
            } 
            else {
                ptr2 = ptr2->next;
            }
            
        }
        return intersection;
        
        // code goes here.
    }
};

int main(){
   return 0;
}