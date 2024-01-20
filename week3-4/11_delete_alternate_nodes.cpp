#include<bits/stdc++.h>
using namespace std;

struct Node 
{
	int data;
	struct Node *next;
	
	Node(int x){
	    int data = x;
	    next = NULL;
	}
};
// Complete this function
void deleteAlt(struct Node *head){
    // Code here
    while(head!=NULL && head->next!=NULL){
        head->next=head->next->next;
        head=head->next;
    }
}
int main(){
   return 0;
}