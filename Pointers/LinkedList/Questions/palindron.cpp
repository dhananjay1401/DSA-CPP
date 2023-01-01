class Solution{

  private:
      Node* getMid(Node* head){

     Node* fast = head;
      Node* slow = head;

      while(fast!=NULL){
        fast = fast -> next;

