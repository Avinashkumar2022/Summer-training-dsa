#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val)
    {
        data=val;
        next=NULL;
    }
};



void insertAtHead(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == NULL) {
        head = newNode;
        head->next = head; // Make the head node circular
        return;
    }

    Node* temp = head;
    while (temp->next != head) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->next = head;
    head = newNode; // Update the head pointer
}

void insertAtTail(Node*& head, int val)
{
    Node* newNode=new Node(val);
    Node* temp=head;
    if (head == NULL) 
        {
            insertAtHead(head,val);
            return;
        }

    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=head;

}
void deleteAtHead(Node* &head)
{
    Node* temp=head;

    while(temp->next!=head)
    {
        temp=temp->next;
    }
    Node* toDelete=head;
    temp->next=head->next;
    head=head->next;
    delete toDelete;
}

void deletion(Node* &head, int pos)
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

    Node* temp=head;
    int count=1;

    while(count!=pos-1)
    {
        temp=temp->next;
        count++;
    }
    Node* toDelete=temp->next;
    temp->next=toDelete->next;
    delete toDelete;
}

void display(Node* head)
{
    Node* temp=head;
    while(temp->next!=head)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
    Node* head=NULL;
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
    return 0;
}