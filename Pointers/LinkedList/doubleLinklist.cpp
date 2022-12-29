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

     ~Node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
        cout << " memory is free for node with data " << value << endl;
    }

};


void insertAtHead(Node* &tail, Node* &head, int d){
if(head==NULL){
    Node* temp = new Node(d);
    head = temp;
    tail = temp;
}else{
    Node* temp = new Node(d);
temp -> next = head;
head -> prev = temp;
head = temp;
}


}

void insertAtTail(Node* &tail,Node* &head, int d){
    if(tail==NULL){
    Node* temp = new Node(d);
    tail = temp;
    head = temp;
}else{
Node* temp = new Node(d);
temp -> prev = tail;
tail -> next = temp;
tail = temp;
}
}

void insertAtPosition(Node* &tail,Node* &head, int position, int d){
if(position==1){
    insertAtHead(tail,head,d);
    return ;
}

Node* temp = head;
int cnt = 1;
while(cnt<position-1){
    temp = temp -> next;
    cnt++;
}

if(temp->next == NULL){
    insertAtTail(tail,head,d);
    return ;
}
Node* nodeToInsert = new Node(d);

nodeToInsert -> next = temp -> next;
temp -> next -> prev = nodeToInsert;
temp -> next = nodeToInsert;
nodeToInsert -> prev = temp;

}
void deleteNode(Node* &head, int position){

if(position ==1){
    Node* temp =head;
    temp -> next -> prev = NULL;
    head = temp -> next;
    temp -> next =  NULL;
    delete temp;
}else{
Node* curr =head;
Node* pre = NULL;
int cnt = 1;
while(cnt<position){
    pre = curr;
    curr = curr -> next;
    cnt++;
}
curr -> prev = NULL;
pre -> next = curr-> next;
curr -> next -> prev = pre;
curr -> next = NULL;
delete curr;
}
}

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

Node* head = NULL;
Node* tail = NULL;
insertAtHead(tail,head,40);
insertAtTail(tail,head,20);
insertAtHead(tail,head,90);
insertAtPosition(tail,head,4,9);
print(head);
deleteNode(head , 2);
print(head);
getLength(head);
return 0;
}

