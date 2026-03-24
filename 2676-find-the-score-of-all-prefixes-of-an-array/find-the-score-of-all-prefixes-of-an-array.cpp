class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        long long n=nums.size();
        long long maxi=0,conver=0;
        vector<long long>ans(n);
        for(int i=0;i<n;i++){
            if(nums[i]>maxi){
                maxi=nums[i];
            }
            conver+=nums[i]+maxi;
            ans[i]=conver;
        }
        return ans;

        
    }
};