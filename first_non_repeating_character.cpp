class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    queue <char> q;
		    string ans = "";
		    int freq[26] = {0};
		    for(int i =0; i!=A.length();i++){
		        q.push(A[i]);
		        freq[A[i]-97]++;
		        while(q.size()!=0&& freq[q.front()-97]!=1){
		            q.pop();
		        }
		            if(q.size()!=0)
		                ans.push_back(q.front());
		            
		            else
		                ans.push_back('#');
		            
		        
		        
		    }
		    return ans;
		}

};
