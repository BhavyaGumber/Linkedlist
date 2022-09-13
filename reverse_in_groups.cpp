class Solution
{
    public:
    struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        node *curr=head;
        node *prev=NULL;
        node *nex = head;
     int  count=0;
        while(curr!=NULL && count<k){
            nex=nex->next;
            curr->next=prev;
            prev=curr;
            curr=nex;
           
          
            count++;
             }
             if(nex!=NULL){
                 head->next = reverse(nex,k);
             }
             return prev;
    }
            
};
