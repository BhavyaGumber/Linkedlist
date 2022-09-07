 Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     Node *curr=head;
     unordered_set<int> st;
     Node *prev=NULL;
     while(curr!=NULL){
         if(st.find(curr->data)!=st.end()){
             prev->next=curr->next;
             
         }
         else{
             st.insert(curr->data);
             prev=curr;
         }
         curr=curr->next;
     }
     return head;
     
   
    }
