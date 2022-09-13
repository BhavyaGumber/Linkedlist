class Solution {
public:
    Node *rotateDLL(Node *start,int p)
    {
        //Add your code here
        if(p==0){
            return start;
        }
        
        Node *current = start;
        int count=1;
        while(count<p && current!=NULL){
            current=current->next;
            count++;
        }
        Node *pthNode = current;
        while(current->next!=NULL){
            current=current->next;
        }
        current->next=start;
        start->prev=current;
        start=pthNode->next;
        start->prev = NULL;
        pthNode->next = NULL;
    }
};
