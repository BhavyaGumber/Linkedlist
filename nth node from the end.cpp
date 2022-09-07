int getNthFromLast(Node *head, int n)
{
       // Your code here
       int count=0;
      
       Node *curr=head;
       Node *temp=head;
       while(curr!=NULL){
        
           curr=curr->next;
              count++;
       }
      if(count<n)return -1;
      for(int i=1;i<count-n+1;i++){
          temp=temp->next;
      }
       return temp->data;
}
