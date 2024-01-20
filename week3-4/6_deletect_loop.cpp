#include<bits/stdc++.h>
using namespace std;
/*detect loop:
 two pointers fast and slow =head,
 while(fast  not null and fast->next not null)
 fast=fast->next->next
 slow=slow->next
 if fast and slow are equal==loop exist else false;
 */
 struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };

class Solution{
    public:
        bool hasCycle(ListNode *head) {
            if(head==NULL || head->next==NULL)return false;
            ListNode *fast=head,*slow=head;
            
            while(fast!=NULL && fast->next!=NULL){
                fast=fast->next->next;
                slow=slow->next;
                
                if(fast==slow)return true;
            }
            return false;
            
        }
};
int main(){
   return 0;
}