#include<iostream>
using namespace std ;
class node{
    public:
    int data;
    node *next=NULL;

    node(int value)
    {
        data=value;
    }
};

node*head=NULL;

void insertathead(int value){
    node* ptr=new node(value);
    if(head==NULL){
        head=ptr;
    }
    else{
        ptr->next=head;
        head=ptr;
    }
}

void printlist(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

node* reverselist(node* head){
    node*prev=NULL;
    node*curr=head;
    
    while(curr!=NULL){
       node*next=curr->next;
       curr->next=prev;
       prev=curr;
       curr=next;
    }
    return prev;
}

int main(){
    int choice;
    cout<<"enter how many nodes u want to enter"<<endl;
    cin>>choice;
    cout<<"enter values"<<endl;
    for(int i=0;i<choice;i++){
        int value;
        cin>>value;
        insertathead(value);
    }

    cout<<"nodes before reversing :";
    printlist(head);

    head=reverselist(head);
    cout<<endl;

    cout<<"nodes after reversing"<<endl;
    printlist(head);
}