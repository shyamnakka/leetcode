class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
         int n=nums.size();
         vector<int>ans(n);
         int leftsum=0,rightsum=0;
         for(int i=0;i<n;i++){
            rightsum+=nums[i];
         }
         for(int i=0;i<n;i++){
            rightsum-=nums[i];
            int curr=abs(leftsum-rightsum);;
            ans[i]=curr;
            leftsum+=nums[i];
         }
         return ans;
    }
};