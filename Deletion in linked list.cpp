#include<iostream>
using namespace std;
void deletion(node* &head, int val){

node* temp=head;
while(temp->next->data!=val){

    if(head==NULL){
        return;
    }
    if(head->next=NULL){
        deleateat(head);
        return;
    }



    temp=temp->next;
}
node* todelete = temp->next;
temp->next=temp->next->next;

delete todelete;




}
int main()
{
    return 0;
}
