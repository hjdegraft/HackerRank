#include <cstddef>
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;	

class Node {
    public:
        int data;
        Node *next;
        Node(int d){
            data=d;
            next=NULL;
        }
};

class Solution {
    public:
    
      Node* removeDuplicates(Node *head){
            Node *after = NULL;
            Node *dup = NULL;

            Node *curr = head;

            while(curr->next != NULL){
                after = curr->next; //node after current one
                
                while(after != NULL) {
                    if(curr->data == after->data) { //if dup found
                        dup = after; 
                        curr->next = after->next;
                        delete dup;
                    } else {
                        after = after->next;
                    }//if no dup found, advance after node
                }
                
                curr = curr->next; //advance curr node
            }
            
            return head;
      }
      
      Node* insert(Node *head,int data){
               Node* p=new Node(data);
               if(head==NULL){
                   head=p;  

               }
               else if(head->next==NULL){
                   head->next=p;

               }
               else{
                   Node *start=head;
                   while(start->next!=NULL){
                       start=start->next;
                   }
                   start->next=p;   

               }
                    return head;
                
            
          }
          void display(Node *head){
                  Node *start=head;
                  while(start)
                    {
                        cout<<start->data<<" ";
                        start=start->next;
                    }
           }
};
			
int main()
{
	Node* head=NULL;
  	Solution mylist;
    int T,data;
    cin>>T;
    while(T-->0){
        cin>>data;
        head=mylist.insert(head,data);
    }	
    head=mylist.removeDuplicates(head);

	mylist.display(head);
		
}
