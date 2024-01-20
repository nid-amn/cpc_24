#include<bits/stdc++.h>
using namespace std;
 
struct Node
{
	char data;
	struct Node *next;
	
	Node(int x){
	    data = x;
	    next = NULL;
	}
	
};
// task is to complete this function
// function should return head to the list after making 
// necessary arrangements
struct Node* arrange(Node *head)
{
   //Code here
   unordered_set<char> vowel={'a','e','i','o','u'};
   vector<char> vows;
   vector<char>cons;
   
   struct Node*temp=head;
   while(temp){
       if(vowel.find(temp->data)!=vowel.end()){
           vows.push_back(temp->data);
       }
       else{
           cons.push_back(temp->data);
       }
       temp=temp->next;
   }
   temp=head;
   
   for(int i=0;i<vows.size();i++){
            temp->data=vows[i];
            temp=temp->next;
        }
        
    for(int i=0;i<cons.size();i++){
        temp->data=cons[i];
        temp=temp->next;
    }
   
    return head;
}
int main(){
   return 0;
}