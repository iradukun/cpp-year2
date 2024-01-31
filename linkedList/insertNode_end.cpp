// #include <iostream>

// struct Node {
//     int data;
//     Node* next;
// };

// void insertAtEnd(Node*& head, int data) {
//     Node* newNode = new Node;
//     newNode->data = data;
//     newNode->next = nullptr;

//     if (head == nullptr) {
//         head = newNode;
//     } else {
//         Node* current = head;
//         while (current->next != nullptr) {
//             current = current->next;
//         }
//         current->next = newNode;
//     }
// }

// int main() {
//     Node* head = nullptr;
//     insertAtEnd(head, 1);
//     insertAtEnd(head, 2);
//     insertAtEnd(head, 3);

//     Node* current = head;
//     while (current != nullptr) {
//         std::cout << current->data << " ";
//         current = current->next;
//     }

//     return 0;
// }

#include <iostream>

// class Node {
// public:
//     int data;
//     Node* next;
//     Node* prev;

//     Node(int data) : data(data), next(nullptr), prev(nullptr) {}
// };
class Node {
public:
    // data stored in the node
    int data;
    // pointer to the next node in the list
    Node* next;
    // pointer to the previous node in the list
    Node* prev;

    // constructor initializes data, next, and prev pointers
    Node(int data) : data(data), next(nullptr), prev(nullptr) {}
};


// void insertAtEnd(Node*& head, int data) {
//     Node* newNode = new Node(data);

//     if (head == nullptr) {
//         head = newNode;
//     } else {
//         Node* current = head;
//         while (current->next != nullptr) {
//             current = current->next;
//         }
//         current->next = newNode;
//         newNode->prev = current;
//     }
// }

// Function to insert a new node at the end of the
void insertAtEnd(Node*& head, int data) {
// Create a new node with the given data
   Node* newNode = new Node(data);
   if (head == nullptr) {        // If the list is empty, the new node becomes the head
       head = newNode;
   } else {
       // Traverse to the end of the list
       Node* current = head;
       while (current->next != nullptr) {
           current = current->next;
       }
       // Link the new node after the last node
       current->next = newNode;
       // Link the new node's previous pointer to the last node
       newNode->prev = current;
   }
}

// Create empty head node
int main() {
   Node* head = nullptr;

   // Insert 1, 2, 3 at end of list
   insertAtEnd(head, 1);
   insertAtEnd(head, 2);
   insertAtEnd(head, 3);

   // Print data of each node
   Node* current = head;
   while (current != nullptr) {
       std::cout << current->data << " "; // Print current node data
       current = current->next; // Move to next node
   }

   return 0;
}