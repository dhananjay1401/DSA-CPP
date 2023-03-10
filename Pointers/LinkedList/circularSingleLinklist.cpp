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


void insertNode(Node* &tail, int element, int d){
 if(tail == NULL){
    Node* newNode = new Node(d);
    tail = newNode;
    newNode -> next = newNode;
}else{
Node* curr = tail;
while(curr -> data != element){
    curr = curr -> next;
}
Node* temp = new Node(d);
temp -> next = curr -> next;
curr -> next = temp;
}
}

void del(Node* &tail, int value){
if(tail==NULL){
    cout<<"List is already empty"<<endl;
    return;
}else{

Node*prev = tail;
Node*curr = prev -> next;

while(curr->data!=value){
    prev = curr;
    curr = curr -> next;
}
prev -> next = curr -> next;
if(curr = prev){
    tail = NULL;
}else if(tail == curr){
    tail = prev;
}
curr -> next = NULL;
delete curr;
}

}

void print(Node*tail){
    Node* temp = tail;

    if(tail == NULL){
        cout<<"List Empty"<<endl;
        return;
    }
do{
    cout<<tail->data<<" ";
    tail = tail ->next;
}while(tail!=temp);
cout<<endl;
}


int main(){
Node* tail = NULL;
insertNode(tail,5,3);
//print(tail);

insertNode(tail,3,10);
print(tail);

//insertNode(tail,3,13);
//print(tail);

//insertNode(tail,13,5);
//print(tail);

del(tail,3);
//del(tail,10);
print(tail);

return 0;
}



