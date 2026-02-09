class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
      int n=nums.size();
      int cnt=0;
      if(n<3) return 0;
      for(int l=0;l<=n-3;l++){
        int r=l+1;
        while(r<n-1){
            int leftdiff=nums[r-1]-nums[r];
            int rightdiff=nums[r]-nums[r+1];
            if(leftdiff==rightdiff) cnt++;
            else break;
            r++;
        }
      } 
      return cnt; 
    }
};