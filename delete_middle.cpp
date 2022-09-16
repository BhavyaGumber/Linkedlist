Node* deleteMid(Node* head)
{
    if(head==NULL||head->next==NULL){
        return NULL;
    }
    // Your Code Here
    Node *prev=head;
    Node *fast=head;
    Node *slow=head;
    while(fast && fast->next){
        slow=slow->next;
        fast=fast->next->next;
    }
    while(prev->next!=slow){
        prev=prev->next;
    }
    prev->next=slow->next;
    return head;
    
}
