class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
       int n=nums.size();
       int cnt=0,presum=0;
       unordered_map<int,int>mpp;
       mpp[0]=1;
       for(int i=0;i<n;i++){
        presum=presum+nums[i];
        int remove=presum-goal;
        cnt=cnt+mpp[remove];
        mpp[presum]++;
       }
       return cnt;
    }
};