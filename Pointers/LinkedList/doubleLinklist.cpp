#include<iostream>
using namespace std;

class Node{
public:
    int data;
    Node* curr;
    Node* prev;

    Node(int d){
    this -> data = d;
    this -> curr = NULL;
    this -> prev = NULL;
    }
};

void print(Node* &head){
Node* temp = head;
while(temp!=NULL){
    count<<temp->data<<" ";
    temp = temp -> next;
}
}

void getLength(Node* &head){
Node* temp =head;
int len = 0;
while(temp!=NULL){
    len++;
    temp = temp -> next;
}
return len;
}
