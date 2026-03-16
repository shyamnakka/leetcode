class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int prefix=0;
        for(int i=0;i<n;i++){
            prefix+=nums[i];
            nums[i]=prefix;
        }
        for(int currentidx=0;currentidx<n;currentidx++){
            int leftsum=(currentidx==0)?0 : nums[currentidx-1];
            int rightsum=nums[n-1]-nums[currentidx];
            if(leftsum==rightsum) return currentidx;
           
        }
        return -1;
    }
};