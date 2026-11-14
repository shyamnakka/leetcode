class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int mini=INT_MAX;
        bool exist=false;
        for(int i=0;i<nums.size();i++){
            int sum=0;
            int x=i;
            for(int j=i;j<nums.size();j++){
                int y=j;
                int idx=y-x+1;
                sum+=nums[j];
                if(idx>=l && idx<=r && sum>0){
                    mini=min(sum,mini);
                    exist=true;
                }
            }
        }
        if(exist) return mini;
        else return -1;

        
    }
};