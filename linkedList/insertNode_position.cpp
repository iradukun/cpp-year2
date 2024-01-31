// using strutures for a singly linked list 

#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

void addMiddle(Node* head, int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* slow = head;
    Node* fast = head;

    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }

    newNode->next = slow->next;
    slow->next = newNode;
}

int main() {
    Node* head = NULL;
    addMiddle(head, 10);
    addMiddle(head, 20);
    addMiddle(head, 30);

    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }

    return 0;
}