Node* deleteNode(Node* head, int key) 
{
    
    if(head==NULL){
        return NULL;
    }
 
    if(head->next==head && head->data==key){
        return NULL;
    }
    Node *prev=head;
    Node*curr=head->next;
    if(head->data==key){
        while(prev->next!=head){
           prev=prev->next;
        }
        prev->next=curr;
        return curr;
    }
  
     while(curr!=head){
        if(curr->data==key){
            prev->next=curr->next;
            curr=prev->next;
          }
         if(curr->next==head&&curr->data==key){
        prev->next=head;
        delete(curr);
      
    }
        else{
            prev=curr;
            curr=curr->next;
        }
  }
    
   
    
    
    return head;
    
}
