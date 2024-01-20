#include<bits/stdc++.h>
using namespace std;

/*swapping alternate nnodes*/

struct ListNode {
     int val;
     ListNode *next;
     ListNode() : val(0), next(nullptr) {}
     ListNode(int x) : val(x), next(nullptr) {}
     ListNode(int x, ListNode *next) : val(x), next(next) {}
 };

class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(!head)return NULL;
        ListNode *current=head;
        ListNode *prev=NULL;
        ListNode *next=head;
        int count=0;
        while(count<2 && current!=NULL){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
            count++;
        }
        if(next!=NULL){
            head->next=swapPairs(next);
        }
        return prev;
    }
};
int main(){
   return 0;
}