class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        long long mini=INT_MAX;
        long long maxi=INT_MIN;
        for(long long i=0;i<nums.size();i++){
            if(mini>nums[i]){
                mini=nums[i];
            }
            if(maxi<nums[i]){
                maxi=nums[i];
            }
        }
        long long ans=maxi-mini;
        return ans*k;
        
    }
};