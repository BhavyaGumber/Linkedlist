class Solution{
public:
    ListNode *moveToFront(ListNode *head){
        if(head==NULL|| head->next==NULL){
            return head;
        }
        ListNode *last=head;
        ListNode *second_last=NULL;
        while(last->next!=NULL){
             second_last=last;
            last=last->next;
           
        }
        second_last->next=NULL;
        last->next=head;
       
        return last;
        
    }
};
