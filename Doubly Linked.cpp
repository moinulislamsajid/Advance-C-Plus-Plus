#include<iostream>
using namespace std;
class node{

 public :
     int data;
     node* next;
     node* prev;
     node(int val){

     data=val;
     next=NULL;
     prev=NULL;

     }


};
void insertspace(node* &head,int val){
    node* n=new node(val);
    n->next=head;
    if(head!=NULL){

    head->prev=n;


       }

    head=n;

}
void inserttail(node* &head, int val){

if(head==NULL){

    inserttail(head,val);
    return;
}
 node* n=new node(val);
 node* temp=head;

 while(temp->next!=NULL){

    temp=temp->next;

 }
 temp->next=n;
n->prev=temp;



}
void display(node* head){

node* temp=head;
while(temp!=NULL){

    cout<<temp->data<<" ";
    temp=temp->next;
}


}
int main()
{
   node* head=NULL;
   inserttail(head,1);
   inserttail(head,2);
   inserttail(head,3);
   inserttail(head,4);
   display(head);
   insertspace(head,5);
   display(head);



    return 0;
}
