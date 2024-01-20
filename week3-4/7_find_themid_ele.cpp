#include<bits/stdc++.h>
using namespace std;
/* find the mid element:
    1. to use vector, then return v[size/2]
    2.fast and slow, When the fast pointer reaches the end, 
    the slow pointer will reach the middle of the linked list. {Floyd cycle detection}
*/

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *temp=head;
        int count=0;
        while(temp!=NULL){
            temp=temp->next;
            count++;
        }
        temp=head;
        int x=count/2+1;
        for(int i=1;i<x;i++){
            temp=temp->next;
        }
        return temp;
    }
};
int main(){
   return 0;
}