Node* findIntersection(Node* head1, Node* head2)
{
    Node *curr1 = head1;
    Node *curr2 = head2;
    struct Node *dummy =  new Node(1);
    Node *temp=dummy;
    // Your Code Here 
    while(curr1 && curr2){
        if(curr1->data<curr2->data){
            curr1=curr1->next;
        }
        else if(curr1->data==curr2->data){
            Node *newNode = new Node(curr1->data);
            temp->next = newNode;
            temp=temp->next;
            curr1=curr1->next;
            curr2=curr2->next;
            
            
        }
        else if(curr2->data<curr1->data){
            curr2=curr2->next;
        }
        
    }
    return dummy->next;
}
