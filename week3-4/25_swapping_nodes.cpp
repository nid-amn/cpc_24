#include<bits/stdc++.h>
using namespace std;

/*Swapping nodes:Return the head of the linked list after swapping the values of the kth node
 from the beginning and the kth node from the end (the list is 1-indexed).
slow=fast=head;
increase fast by k.
assign first=fast;
then increment both fast and slow till fast->next!=NULL
then swap slow->val and first->val;
*/

struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(--k){
            fast = fast->next;
        }
        ListNode* first = fast;
        while(fast->next != NULL){
            slow = slow->next;
            fast = fast->next;
        }
        swap(first->val, slow->val);
        return head;
    }
};
int main(){
   return 0;
}