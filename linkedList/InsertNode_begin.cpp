#include<iostream>


//  struct Node{
//     int data;
//     Node* next;
//  };

//  void push_at_beginning(Node** head_ref, int new_data){

// Node* new_node = new Node();
// new_node->data = new_data;
// new_node->next= *head_ref;
// *head_ref = new_node;
//  }

//  int main(){
//     Node* head = NULL;
//     push_at_beginning(&head, 5);
//     push_at_beginning(&head, 4);
//     push_at_beginning(&head, 3);
//     push_at_beginning(&head, 2);
//     push_at_beginning(&head, 1);

//     std::cout << "Linked List: ";
//     Node* temp = head;

//     while(temp!= NULL){
//         std::cout << temp->data << " ";
//         temp = temp->next;
//     }
//     std::cout << std::endl;
//     return 0;
//  }

 //using classes

 class Node{
    public:
    int data;
    Node* next;
 };

class LinkedList{
    private:
    Node* head;

    public:
    LinkedList() : head(nullptr){};
    void push_at_beginning(int new_data){
     Node* new_node= new Node();
     new_node->data= new_data;
     new_node->next= head;
     head= new_node;
    }

    void printList(){
        Node* temp= head;
        while(temp!=NULL){
            std::cout<<temp->data<<" ";
            temp= temp->next;
        }
        std::cout<<std::endl;
    }

};

int main(){
    LinkedList list;
    list.push_at_beginning(10);
    list.push_at_beginning(20);
    list.push_at_beginning(30);
    list.printList();
}