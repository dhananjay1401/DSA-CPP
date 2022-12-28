#include<iostream>
using namespace std;

class Node{

public:
int data;
Node* next;

Node(int data){
this -> data = data;
this -> next = NULL;
}
};
void insertAtHead(Node* &head, int d){
Node* temp = new Node(d);
temp->next = head;
head = temp;
}
int print(Node* &head){
Node* temp =head;
while(temp !=NULL){
        cout<<temp->data<<" "<<endl;
        temp = temp -> next;
}
}

int main(){
Node* node1 = new Node(10);
Node* head = node1;
insertAtHead(head,20);
print(head);
insertAtHead(head,20);
insertAtHead(head,40);
insertAtHead(head,30);
insertAtHead(head,10);
insertAtHead(head,230);
insertAtHead(head,439530);
insertAtHead(head,2320);
insertAtHead(head,120);
insertAtHead(head,3240);
insertAtHead(head,2340);
insertAtHead(head,2340);
print(head);

return 0;
}


