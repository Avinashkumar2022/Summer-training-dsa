#include<iostream>
using namespace std;

class Node{
    public:
    int data; 
    Node* next;
    Node* prev;

    Node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};

void insertAtHead(Node*& head,int val)
{
    Node* newNode=new Node(val);
    newNode->next=head;
    if(head!=NULL)
    {
        head->prev=newNode;
    }

    head=newNode;
}

void insertAtTail(Node* &head,int val)
{
    if(head==NULL)
    {
        insertAtHead(head,val);
        return;
    }


    Node* newnode=new Node(val);
    Node* temp=head;

    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->prev=temp;
}

void deletion(Node* head, int key)
{
    Node* temp=head;
    while(temp->next->data!=key)
    {
        temp=temp->next;
    }
    Node* toDelete=temp->next;
    temp->next=temp->next->next;
    if(temp->next->next!=NULL)
    {
    temp->next->next->prev=temp;
    }

    delete toDelete;
    delete temp->next;
}

void display(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


int main()
{
    Node* head=NULL;

    insertAtTail(head,0);
    insertAtTail(head,-1);
    insertAtTail(head,-2);
    insertAtTail(head,-3);

    insertAtHead(head,1);
    insertAtHead(head,2);
    insertAtHead(head,3);
    insertAtHead(head,4);
    insertAtHead(head,5);
    insertAtHead(head,6);
    display(head);

    cout<<"After the deletion"<<endl;

    deletion(head,-3);
    display(head);
    return 0;
}