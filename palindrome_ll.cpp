class Solution{
    Node* reverse(Node* head2){
        Node *curr=head2;
        Node *prev=NULL;
        Node *next;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    Node *findMiddle(Node *head){
        
        Node *slow=head;
        Node *fast=head;
        
        while(fast->next && fast->next->next){
            slow=slow->next;
            fast=fast->next->next;
            
        }
        return slow;
          
    }
  public:
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        if(head==NULL||head->next==NULL){
            return true;
        }
       Node *mid = findMiddle(head);
       Node *head2= reverse(mid->next);
       Node *dummy=head;
       while(head2!=NULL){
           if(dummy->data!=head2->data){
             return false;
           }
           else{
               dummy=dummy->next;
               head2=head2->next;
           }
           
