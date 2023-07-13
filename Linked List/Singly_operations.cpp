#include<iostream>
using namespace std;

//We use custom datatypes to make linked list
//First node of the linked list is known as head and last node is known as tail

// There are two parts of a node, one is the data and another is the address of the next node.

// [data|address] ->The structure of a singly linked list node

//[previous Address|data|Next Address] -> doubly linked list node

//In Circular linked lists the last pointer points at the address of of first element instead of NULL.

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


//Insert at Tail

void insertAtHead(Node*& head,int val)
{
    Node* n=new Node(val);
    n->next=head;
    head=n;
}

void insertAtTail(Node* head,int val)
{
    Node* n=new Node(val);

    if (head == NULL) 
    {
        head = n;
        return;
    }

    Node* temp=head;

    //Keep iterating until next of temp is NULL.
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    //at the end after iterating the loop
    temp->next=n;
}

void deletion(Node*& head,int val)
{
    Node* temp=head;
    if(temp==NULL)
    {
        cout<<"linked list is empty";
        return;
    }
    while(temp->next->data!=val)
    {
            temp=temp->next;
    }
    Node* toDelete=temp->next;
    temp->next=temp->next->next;

    delete toDelete;
}

void deleteAtHead(Node*& head,int val)
{
    Node* temp=head;
    if(temp=NULL)
    {
        cout<<"linked list is empty";
        return;
    }
    temp=temp->next;
}

bool search(Node* head,int key)
{
    Node* temp=head;
    while (temp != NULL) 
    {
        if(temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}

int main() {
    Node* head = new Node(1); // Create the head node
    insertAtTail(head, 2); // Insert 2 at the tail
    insertAtTail(head, 3); // Insert 3 at the tail

    insertAtHead(head,10);
    insertAtHead(head,4);

    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;

    deletion(head,2);


    bool result=search(head,2);


    // Print the elements of the linked list
    Node* temp2 = head;
    while (temp2 != NULL) {
        cout << temp2->data << " -> ";
        temp2 = temp2->next;
    }
    cout<<"NULL"<<endl;

    if(result)
    {
        cout<<endl<<"Element exists";
    }
    else{
        cout<<endl<<"Element doesn't exist";
    }

    return 0;
}
