class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int total=0;
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            total=total^nums[i];
        }
        if(total!=0) return n;
        else{
            for(int i=0;i<n;i++){
             if((total^nums[i])!=0){
                ans=n-1;
             }
            }
        }
        if(ans!=0) return ans;
        else return 0;
        
    }
};