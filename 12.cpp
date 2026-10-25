#include<iostream>                     //delete a node from the linked list
using namespace std;

class node
{
    public:
    int val;
    node* next;

    node(int data)
    {
        this->val=data;
        this->next=NULL;
    }
};

node *head=NULL;

void insertathead(int data)
{
    node*temp=new node(data);
    if(head==NULL)
    {
        head=temp;
    }
    else
    {
        temp->next=head;
        head=temp;
    }
}

void printnode()
{
    node*ptr=head;
    if(ptr==NULL)
    {
        return;
    }
    else
    {
        while(ptr!=NULL)
        {
            cout<<ptr->val<<" ";
            ptr=ptr->next;
        }
        cout<<endl;
    }
}

void deletenode(int k)
{
    if(head->val==k)
    {
        node*qwe=head;
        head=head->next;
        delete(qwe);
        return;
    }
    node*hen=head;
    while(hen!=NULL&&hen->next!=NULL)
    {
        if(hen->next->val==k)
        {
            node*del=hen->next;
            hen->next=hen->next->next;
            delete(del);
        }
        hen=hen->next;
    }
}
int main()
{
    insertathead(50);
    insertathead(40);
    insertathead(30);
    insertathead(20);
    insertathead(10);

    cout<<"all nodes before deletion"<<endl;
    printnode();

    int k;
    cout<<"enter the node value to delete"<<endl;
    cin>>k;

    deletenode(k);
    cout<<"all nodes after deletion of k"<<endl;
    printnode();
}