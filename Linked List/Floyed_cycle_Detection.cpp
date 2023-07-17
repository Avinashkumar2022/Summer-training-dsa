#include <iostream>
#include <map>
using namespace std;

class node {
public:
    int data;
    node* next;

    node(int val) {
        data = val;
        next = NULL;
    }
};

void printLinkedList(node* head) 
{
    node* temp = head;
    map<node*, bool> visited; // Keep track of visited nodes

    while (temp != NULL) {
        if (visited[temp]) {
            // Encountered a repeated node, indicating a loop
            cout << "Loop detected!" << endl;
            return;
        }

        visited[temp] = true;
        cout << temp->data << " -> ";
        temp = temp->next;
    }

    cout << "NULL" << endl;

    // Check if the list is still connected beyond NULL
    if (temp != NULL) {
        cout << "Loop not removed!" << endl;
    } else {
        cout << "Loop successfully removed!" << endl;
    }
}


node* floydDetectionLoop(node* head) {
    if (head == NULL) {
        return NULL;
    }
    node* slow = head;
    node* fast = head;

    while (slow != NULL && fast != NULL) {
        slow = slow->next;
        fast = fast->next;
        if (fast != NULL) {
            fast = fast->next;
        }
        if (slow == fast) {
            return slow;
        }
    }
    return NULL;
}

node* getStartingNode(node* head) {
    node* intersection = floydDetectionLoop(head);
    if (intersection == NULL) {
        return NULL;
    }
    node* slow = head;
    while (slow != intersection) {
        slow = slow->next;
        intersection = intersection->next;
    }

    return slow;
}

void removeLoop(node* head) {
    node* intersection = floydDetectionLoop(head);
    if (intersection == NULL) {
        return;
    }

    node* ptr1 = head;
    node* ptr2 = intersection;

    // Move ptr1 and ptr2 simultaneously until they meet again
    while (ptr1->next != ptr2->next) {
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }

    // Break the loop by setting the next pointer of the node before the meeting point to NULL
    ptr2->next = NULL;

}

int main() {
    node* head = new node(3);
    node* node1 = new node(6);
    node* node2 = new node(9);
    node* node3 = new node(5);
    node* node4 = new node(2);
    node* node5 = new node(7);
    node* node6 = new node(4);

    head->next = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;
    node6->next = node3; // Create a loop

    cout << "Original Linked List: ";
    printLinkedList(head);

    removeLoop(head);

    cout << "Linked List after loop removal: ";
    printLinkedList(head);

    return 0;
}

