//Approach 1
Node* reverseLinkedList(Node *head)
{
     if(head == NULL || head-> next == NULL){
            return head;
        }
        Node* prev = NULL;
        Node* curr = head;
        Node* forward = NULL;
        while(curr!=NULL){
            forward = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = forward;
        }
        return prev;
}

//Approach 2

void recursive(Node* &head, Node * curr, Node * prev){


}

#include <bits/stdc++.h>
/****************************************************************

    Following is the class structure of the Node class:

        class Node
        {
        public:
	        int data;
	        Node *next;
	        Node(int data)
	        {
		        this->data = data;
		        this->next = NULL;
	        }
        };

*****************************************************************/


Node* recursive(Node* &head){

if(head==NULL||head->next == NULL ){
    return head;
}
Node* chotaHead = recursive(head -> next);
head -> next -> next = head;
head -> next = NULL;
return chotaHead;
}
Node* reverseLinkedList(Node *head)
{

    return recursive(head);

}




