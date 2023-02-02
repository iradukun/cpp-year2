

struct Node{
    int data;
    Node *next;
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
third->next=NULL;
cout<<first->data<<" "<<second->data<<endl;
return 0;
}