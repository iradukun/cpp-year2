#include <iostream>

struct Node {
    int data;
 Node* next;
};

 void push_at_beginning(Node** head_ref, int new_data){

Node* new_node = new Node();
new_node->data = new_data;
new_node->next= *head_ref;
*head_ref = new_node;
 }
// Function to insert a new node at a given position in the list
void insertAtPosition(Node** head_ref, int position, int data) {
    // If the position is 0, insert at the beginning
    if (position == 0) {
        push_at_beginning(head_ref, data);
        return;
    }

    Node* current = *head_ref;
    for (int i = 1; i < position && current != nullptr; i++) {
        current = current->next;
    }

    // If the position is greater than the length of the list
    if (current == nullptr) {
        std::cout << "Invalid position" << std::endl;
        return;
    }

    Node* new_node = new Node();
    new_node->data = data;
    new_node->next = current->next;
    current->next = new_node;
}

// Driver Code

int main() {
    Node* head = nullptr;
    insertAtPosition(&head, 0, 1);
    insertAtPosition(&head, 1, 2);
    insertAtPosition(&head, 2, 3);
    insertAtPosition(&head, 3, 4);

    std::cout << "Linked List: ";
    Node* temp = head;

    while (temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;

    return 0;
}