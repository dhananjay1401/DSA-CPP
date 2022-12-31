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

Node *removeDuplicates(Node *head)
{
    Node* curr = head;
    while(curr != NULL){
        Node* temp = curr;
        while(temp != NULL){
            if((temp-> next!=NULL) && temp-> next-> data == curr->data){
                Node* temp_next = temp -> next -> next;
                Node*  nodetoDelete = temp ->next;
                delete(nodetoDelete);
                temp->next= temp_next;
            }
                else{
                    temp = temp -> next;
                }
        }
       curr = curr -> next;
    }
    return head;
}
