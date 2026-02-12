class Solution {
public:
    int longestBalanced(string s) {
       int n=s.size();
       int ans=0;
       for(int i=0;i<n;i++){
        unordered_map<char,int>mpp;
        for(int j=i;j<n;j++){
            mpp[s[j]]++;
            int temp=mpp[s[j]];
            bool equal=true;
            for(auto it:mpp){
                if(it.second!=temp){
                    equal=false;
                    
                }
            }
            if(equal){
                ans=max(ans,j-i+1);
            }
        }
       }
       return ans; 
    }
};