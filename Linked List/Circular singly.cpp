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

void insertAtTail(Node*& head, int val)
{
    Node* newNode=new Node(val);
    Node* temp=head;
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    newNode->next=head;

}

int main()
{
    return 0;
}