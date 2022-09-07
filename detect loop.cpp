class Solution {
public:
    bool hasCycle(ListNode *head) {
         ListNode *slow = head;
        ListNode *fast=head;
        if(head == NULL|| head->next==NULL){
            return false;
        }
        //if fast->next and fast->next->next does not exist means we have reached the end of the linkedlist 
         //If the fast pointer reached the end of the list, that means there is no cycle and we can return false.
        while( fast && fast->next && fast->next->next){
            slow = slow->next;
            fast = fast->next->next;
        
        if(slow==fast){
            return true;
        }
        }
        return false;
    }
};
