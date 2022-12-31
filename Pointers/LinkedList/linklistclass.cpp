#include<iostream>
#include<map>

using namespace std;

class Node{

public:
int data;
Node* next;

Node(int data){
this -> data = data;
this -> next = NULL;
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
void insertAtHead(Node* &head, int d){
Node* temp = new Node(d);
temp->next = head;
head = temp;
}
void insertAtTail(Node* &tail, int d){
Node* temp = new Node(d);
tail -> next = temp;
tail = temp;
}

void insertAtPosition(Node* &tail,Node* &head, int position, int d){
if(position==1){
    insertAtHead(head,d);
    return;
}
Node* temp = head;
int cnt = 1;

while(cnt<position -1){
    temp = temp -> next;
    cnt++;
}

if(temp -> next==NULL){
    insertAtTail(tail,d);
    return;
}

Node* nodetoInsert = new Node(d);
    nodetoInsert -> next = temp -> next;
    temp -> next = nodetoInsert;
}

void deleteNode(Node* &head, int position){

if(position ==1){
    Node* temp =head;
    head = head -> next;
    temp->next = NULL;
    delete temp;
}else{
Node* curr =head;
Node* prev = NULL;
int cnt = 1;
while(cnt<position){
    prev = curr;
    curr = curr -> next;
    cnt++;
}
prev->next = curr->next;
curr->next = NULL;
delete curr;
}
}

int print(Node* &head){
Node* temp =head;
while(temp !=NULL){
        cout<<temp->data<<" ";
        temp = temp -> next;
}
}

int main(){


Node* tail = node1;

//insertAtHead(head,30);
//insertAtHead(head,40);
insertAtTail(tail,40);
insertAtTail(tail,80);
insertAtTail(tail,90);
insertAtTail(tail,100);

insertAtPosition(tail,head,1,60);
print(head);

deleteNode(head,1);
print(head);

return 0;
}


