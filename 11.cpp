#include<iostream>                           //add delete node to the head of linked list
using namespace std;

class node
{
    public:
    int value;
    node*next;

    node(int data)
    {
        value=data;
        next=NULL;
    }
};

node* head=NULL;

void insertathead(int data)
{
    node* ptr=new node(data);
    if(head==NULL)
    {
        head=ptr;
    }
    else
    {
        ptr->next=head;
        head=ptr;
    }
}

void deletefromhead()
{
    if(head==NULL)
    {
        return;
    }
    else
    {
        node*temp=head;
        head=head->next;
        free(temp);
    }
}

void traverse()
{
    node* bnn=head;
    while(bnn!=NULL)
    {
        cout<<bnn->value<<" ";
        bnn=bnn->next;
    }
    cout<<endl;
}

int main()
{
    insertathead(50);
    insertathead(40);
    insertathead(30);
    insertathead(20);
    insertathead(10);

    traverse();

    deletefromhead();
    deletefromhead();

    traverse();
}