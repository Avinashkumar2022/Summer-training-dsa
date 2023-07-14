#include<iostream>
using namespace std;


//Reverse the linked list

class node{
    public:
    int data;
    node* next;
    node* prev;
    node* curr;


    node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};


//Insert at Tail

void insertAtHead(node*& head,int val)
{
    node* n=new node(val);
    n->next=head;
    head=n;
}

void insertAtTail(node* head,int val)
{
    node* n=new node(val);

    if (head == NULL) 
    {
        head = n;
        return;
    }

    node* temp=head;

    //Keep iterating until next of temp is NULL.
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

    //at the end after iterating the loop
    temp->next=n;
}

void printLinkedList(node* head) {
    node* temp = head;

    while (temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;
}

node* reverseK(node*& head,int k)
{
    node* prev=NULL;
    node* curr=head;
    node* next;
    int count=0;
    if(head==NULL)
    {
        return NULL;
    }
    while(count<k && curr!=NULL)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(next!=NULL)
    {
        head->next=reverseK(next,k);
    }
    return prev;
}

int main() {
    node* head = new node(1); // Create the head node
    insertAtTail(head, 2); // Insert 2 at the tail
    insertAtTail(head, 3); // Insert 3 at the tail

    insertAtHead(head,10);
    insertAtHead(head,4);

    cout << "Original Linked List: ";
    printLinkedList(head);

    cout<<"Enter the value of k: ";
    int k=10;
    cin>>k;

    head=reverseK(head,k);
    cout << "Modified Linked List: ";
    printLinkedList(head);

    return 0;
}
