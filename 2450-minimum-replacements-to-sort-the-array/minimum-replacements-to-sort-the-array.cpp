class Solution {
public:
    long long minimumReplacement(vector<int>& nums) {
        int n = nums.size();
        long long ans = 0;
        int mini = nums[n - 1];
        for(int i = n - 2; i >= 0; i--){
            if(nums[i] > mini){
                int need = (nums[i] / mini);
                if(nums[i] % mini != 0) need++;
                mini = min(mini, (nums[i]/need));
                ans += (need - 1);
            }
            mini = min(nums[i], mini);
        }
        return ans;
    }
};