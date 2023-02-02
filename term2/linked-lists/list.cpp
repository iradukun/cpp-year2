
#include<iostream>
#include<string>
using namespace std;
struct Node{
    int data;
    Node *next;
};
void display(Node *node){
    while(node!=NULL){
     cout<<node->data<<endl;
     cout<<"next address :"<<node->next<<endl;
     node = node->next;
    }
}

int main(){
Node *first= new Node();
Node *second= new Node();
first->data=10;
first->next=second;
second->data=15;
Node *third= new Node();
second->next=third;
third->data=20;
// third->next=NULL;
// cout<<first->data<<" "<<second->data<<endl;
display(first);
return 0;
}