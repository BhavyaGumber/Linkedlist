class Solution
{
    public:
    Node *reverse(Node *ptr){
        Node *curr=ptr;
        Node *prev=NULL;
        Node *nex;
        while(curr!=NULL){
            nex=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
        }
        return prev;
    }
    Node *compute(Node *head)
    {
        // your code goes here
        
      Node *newHead = reverse(head);
      int max = -1;
      Node *curr = newHead;
      Node *prev;
      while(curr!=NULL){
          if(curr->data>=max){
              max=curr->data;
              prev=curr;
              curr=curr->next;
              
              
          }
          else{
              prev->next=curr->next;
              curr=prev->next;
          }
      }
    Node* h = reverse(newHead);
      return h;
      
    }
    
};
   
