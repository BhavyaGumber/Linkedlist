bool isCircular(Node *head)
{
   // Your code here
   if(head==NULL)return false;
   if(head->next==head)return true;
   Node *curr=head;
   while(curr->next!=NULL){
       if(curr->next==head){
           return true;
       }
       curr=curr->next;
      
   }
   return false;
}
