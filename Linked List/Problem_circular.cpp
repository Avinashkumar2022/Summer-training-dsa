// WAP to Determine if the given linked list is circular or not


#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val) {
        data=val;
        next=NULL;
    }
};

void insertAtHead(node*& head, int val) 
{
    node* newnode = new node(val);
    if (head == NULL) {
        head = newnode;
        head->next = head; // Make the head node circular
        return;
    }

    node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->next = head;
    head = newnode; // Update the head pointer
}

void insertAtTail(node*& head, int val)
{
    node* newnode=new node(val);
    node* temp=head;
    if (head == NULL) 
        {
            insertAtHead(head,val);
            return;
        }

    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=newnode;
    newnode->next=head;

}
void deleteAtHead(node* &head)
{
    node* temp=head;

    while(temp->next!=head)
    {
        temp=temp->next;
    }
    node* toDelete=head;
    temp->next=head->next;
    head=head->next;
    delete toDelete;
}

void deletion(node* &head, int pos)
{
    if(head==NULL)
    {
        cout<<"Linked list is empty";
        return;
    }
    if(pos==1)
    {
        deleteAtHead(head);
        return;
    }

    node* temp=head;
    int count=1;

    while(count!=pos-1)
    {
        temp=temp->next;
        count++;
    }
    node* toDelete=temp->next;
    temp->next=toDelete->next;
    delete toDelete;
}

void display(node* head)
{
    node* temp=head;
    while(temp->next!=head)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}



bool check(node*& head)
{

    node* temp=head;
    if(head==NULL)
    {
        return false;
    }

    while(temp!=NULL && temp!=head)
    {
        temp=temp->next;
    }
    if(temp==head)
    {
        return true;
    }
    return false;
}

int main()
{
    node* head=NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);

    insertAtHead(head,10);
    insertAtHead(head,11);
    insertAtHead(head,12);
    insertAtHead(head,13);

    display(head);
    deletion(head,2);
    display(head);
    deletion(head,1);
    
    display(head);

    bool result=check(head);
    if(result)
    {
        cout<<"The linked list is circular";
    }
    else{
        cout<<"The linked list is not circular";
    }
    return 0;
}