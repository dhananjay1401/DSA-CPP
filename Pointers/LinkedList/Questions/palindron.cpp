class Solution{

  private:
      Node* getMid(Node* head){

     Node* fast = head;
      Node* slow = head;

      while(fast!=NULL){
        fast = fast -> next;
        if(fast!=NULL){
        fast = fast -> next;
        }
        slow = slow -> next;
      }
      return slow;
      }

      Node* reverse(Node* head){
      Node* curr = head;
      Node* prev = NULL;
      Node* forward =NULL;

      while(curr!=NULL){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
      }
      return prev;
      }

