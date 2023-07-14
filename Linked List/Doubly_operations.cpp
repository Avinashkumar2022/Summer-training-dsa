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

void deleteAtHead(Node*& head)
{
    if (head == NULL)
        return;

    Node* toDelete = head;
    head = head->next;
    if (head != NULL)
    {
        head->prev = NULL;
    }
    delete toDelete;
}

void deletion(Node* head, int key)
{
    if(head==NULL)
    {
        cout<<"Linked list is empty";
        return;
    }

    Node* temp=head;

    while(temp!=NULL && temp->data!=key)
    {
        temp=temp->next;
    }
    
    if(temp==NULL)
    {
        cout<<"Key not found in the linked list";
        return;
    }

    if (temp->prev != NULL) {
        temp->prev->next = temp->next;
    }

    if (temp->next != NULL) {
        temp->next->prev = temp->prev;
    }

    delete temp;
}

void display(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"\t";
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

    cout<<"Before deletion:    ";
    display(head);

    cout<<"After the deletion: ";
    deletion(head,-3);
    display(head);
    
    return 0;
}