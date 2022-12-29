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

    if(curr==NULL){
        head = prev;
        return;
    }
    Node* forward = curr -> next;
    recursive(head,forward,curr);
    curr->next = prev;
}

Node* reverseLinkedList(Node *head)
{
        Node* prev = NULL;
        Node* curr = head;
        recursive(head,curr,prev);
    return head;

}
