#include<bits/stdc++.h>
using namespace std;
 
/*
1. using nested loop
2. using hash set
3. find the difference D between two list, 
then we increment the start pointer of the longer list by D nodes and find the common node
4. two pointers
5. making loop for a linked list and finding the inetersection point.
*/
// C++ program to get intersection point of two linked list
struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *tail=headA;

        while(tail->next!=NULL){
            tail=tail->next;
        }
        tail->next=headA;

        ListNode *fast=headB,*slow=headB;
        while(fast!=NULL && fast->next!=NULL){

            fast=fast->next->next;
            slow=slow->next;

            if(slow==fast){
                slow=headB;
                while(slow!=fast){
                    slow=slow->next;
                    fast=fast->next;
                    
                }
                tail->next=NULL;
                return slow;
            }

        }
        tail->next=NULL;
        return NULL;
        
    }
};