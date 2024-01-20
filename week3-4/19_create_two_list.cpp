#include<bits/stdc++.h>
using namespace std;
 
struct Node
{
	int data;
	struct Node* next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
struct Node* a; //store head of first list
struct Node* b; //store head of second list
/*
These are global variables to store heads of split lists
*/

void alternatingSplitList(struct Node* head) 
{
    //Your code here
    if(!head)return;
    
    struct Node*sec = head->next; //b
    a=head;
    b=head->next;
    
    while(sec){
        head->next = head->next->next;
        head = head->next;
        if(sec->next){
            sec->next = sec->next->next;
        }
        sec = sec->next;
    }
}

int main(){
   return 0;
}