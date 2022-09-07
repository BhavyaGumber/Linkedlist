class Solution
{
public:
    vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
    {
        vector<pair<int,int>> v;
        
        // code here
        Node *curr1=head;
        Node *curr2 = head;
        while(curr2->next!=NULL){
            curr2=curr2->next;
            
        }
        while(curr1!=curr2 && curr2->next!=curr1){
        if(curr1->data+curr2->data==target){
            v.push_back({curr1->data,curr2->data});
            curr1=curr1->next;
            curr2=curr2->prev;
            
        }
        else if(curr1->data+curr2->data<target){
            curr1=curr1->next;
        }
        else{
            curr2=curr2->prev;
        }
        }
        return v;
    }
};
