class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int ans=0,prefix=0;
        unordered_map<int,int>mpp;
        mpp[0]=1;
        for(int i=0;i<nums.size();i++){
            prefix+=nums[i];
            int rem=prefix%k;
            if(rem<0) rem+=k;
            ans+=mpp[rem];
            mpp[rem]++;
        }
        return ans;
    }
};