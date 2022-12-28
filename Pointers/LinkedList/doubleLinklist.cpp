#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* next;
    Node* prev;

    Node(int d){
    this -> data = d;
    this -> next = NULL;
    this -> prev = NULL;
    }
};

void print(Node* &head){
Node* temp = head;
while(temp!=NULL){
    cout<<temp->data<<" ";
    temp = temp -> next;
}
}

int getLength(Node* &head){
Node* temp =head;
int len = 0;
while(temp!=NULL){
    len++;
    temp = temp -> next;
}
return len;
}

int main(){

Node* node1 = new Node(10);
Node* head = node1;
print(head);
getLength(head);
return 0;
}

