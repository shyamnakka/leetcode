class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
      int n=nums.size();
      int total=0;
      for(int i=0;i<n;i++){
        total+=nums[i];
      } 
      int left=0;
      for(int currentidx=0;currentidx<n;currentidx++){
        int right=total-left-nums[currentidx];
        if(left==right) return currentidx;
        left+=nums[currentidx];

      } 
      return -1;
    }
};