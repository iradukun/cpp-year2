#include<iostream>
#include<ctype.h>
 
 using namespace std;

 class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this->data = data;
        next=NULL;
    }
 };

 void display(Node *f){
    while(f!=NULL){
        cout<<f->data<<endl;
        f=f->next;
    }
 }

 int main(){
    Node n1(5);
    Node n2=Node(10);
    n1.next =&n2;
    Node *head=&n1;
    display(&n1);
 }