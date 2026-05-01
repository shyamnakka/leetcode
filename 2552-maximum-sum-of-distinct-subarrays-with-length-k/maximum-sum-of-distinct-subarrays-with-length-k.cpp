class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
       unordered_map<int,int>mpp;
       long long sum=0,ans=0;
       int n=nums.size();
       int st=0;
       for(int i=0;i<n;i++){
        while(mpp.find(nums[i])!=mpp.end() || (i-st+1)>k) {
            mpp.erase(nums[st]);
            sum-=nums[st];
            st++;
             

        }
        mpp[nums[i]]++;
        sum+=nums[i];
        if(i-st+1==k){
            ans=max(ans,sum);
        }
       }
       return ans;
        
    }
};