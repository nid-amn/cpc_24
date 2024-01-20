#include<bits/stdc++.h>
using namespace std;
 
class Solution{
    public:
};

struct Node{
    int data;
    Node *next;
};
struct Node* head=NULL;
void insertNode( int data){
    struct Node* new_node= (struct Node*)malloc(sizeof(struct Node));
    new_node->data=data;
    new_node->next=head;
    head=new_node;
}

void display(){
    struct Node* temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void delete_begin(){
    cout<<"Deleted element is "<<head->data<<endl;
    struct Node* x=head;
    
    head=head->next;
    free(x);

}

void delete_last(){
    struct Node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    cout<<"Deleted from last, element is "<<temp->next->data<<endl;
    temp->next=NULL;
}

int main(){
    insertNode(3);
    insertNode(5);
    insertNode(7);
    insertNode(9);
    insertNode(11);

    display();

    delete_begin();

    display();

    delete_last();

    display();

    /*from middle, iterate till the pos then skip the pos*/
   return 0;
}