class Solution {
public:
    int minimumCost(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        sort(nums.begin()+1,nums.end());
        sum+=nums[0]+nums[1]+nums[2];
        return sum;
    }
};