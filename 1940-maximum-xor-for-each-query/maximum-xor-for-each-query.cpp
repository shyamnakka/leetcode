class Solution {
public:
    vector<int> getMaximumXor(vector<int>& nums, int maximumBit) {
        int n=nums.size();
        vector<int>ans(n);
        int maximized=1<<maximumBit;
        int prefix=0;
        for(int i=0;i<n;i++){
          prefix^=nums[i];
          nums[i]=prefix;
        }
        for(int i=n-1,idx=0;i>=0;i--){
            int k=nums[i]^(maximized-1);
            ans[idx]=k;
            idx++;

        }
        return ans;
        
    }
};