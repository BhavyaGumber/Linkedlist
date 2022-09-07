class Solution
{
    public:
    Node *reverse(Node *head){
        Node *curr=head;
        Node *prev=NULL;
        Node *next;
        while(curr!=NULL){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        return prev;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
       head =  reverse(head);
       Node *curr=head;
        // return head of list after adding one
        while(curr!=NULL){
            if(curr->data==9 && curr->next==NULL){
                curr->data=1;
                Node *newNode = new Node(0);
                newNode->next=head;
                head=newNode;
                curr=curr->next;
                
                
            }
            else if(curr->data<9){
                 curr->data=curr->data+1;
                 break;
                
            }
            else if(curr->data==9 && curr->next!=NULL){
                curr->data=0;
                curr=curr->next;
                
                
            }
        }
       Node *ans = reverse(head);
       return ans;
        
    }
};
