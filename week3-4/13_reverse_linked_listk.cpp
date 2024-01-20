#include<bits/stdc++.h>
using namespace std;

/*reverse in groups of given size:
recursive
*/
struct node
{
    int data;
    struct node* next;

    node(int x){
        data = x;
        next = NULL;
    }

}*head;

class Solution
{
    public:
    struct node *reverseIt (struct node *head, int k)
    { 
        // Complete this method
        if(!head)return NULL;
        struct node *current=head;
        struct node *prev=NULL;
        struct node *next=head;
        int count=0;
        while(count<k && current!=NULL){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
            count++;
        }
        if(next!=NULL){
            head->next=reverseIt(next,k);
        }
        return prev;
    }
};
int main(){
   return 0;
}