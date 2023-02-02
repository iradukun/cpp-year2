#include<iostream>
#include<string>

using namespace std;

class Node{
    public:
    int data;
    Node *next;
}

Node *first,*second,*third;
first= new Node();
second= new Node();
third= new Node();