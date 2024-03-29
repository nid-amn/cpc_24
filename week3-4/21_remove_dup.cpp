/*83. Remove Duplicates from Sorted List*/

#include<bits/stdc++.h>
using namespace std;
 
  struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp= head;
        if(head==NULL) return head;
        while(temp&&temp->next){
            if(temp->next->val==temp->val){
                 temp->next=temp->next->next;
            }
            else{
                temp=temp->next;
            }
        }
        return head;
        
    }
};
int main(){
   return 0;
}