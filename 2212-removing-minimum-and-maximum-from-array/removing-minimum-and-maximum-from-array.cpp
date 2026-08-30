class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        int ans,mini_idx,maxi_idx;
        int mini=INT_MAX,maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(mini>nums[i]){
                mini_idx=i;
                mini=nums[i];
            }
            if(maxi<nums[i]){
                maxi_idx=i;
                maxi=nums[i];
            }
        }
        int front_mini=mini_idx+1;
        int back_mini=n-mini_idx;
        int front_maxi=maxi_idx+1;
        int back_maxi=n-maxi_idx;
        int both_front = max(front_mini, front_maxi);
        int both_back = max(back_mini, back_maxi);

        int mini_front_maxi_back = front_mini + back_maxi;
        int maxi_front_mini_back = front_maxi + back_mini;

           ans = min(
                       {both_front,
                       both_back,
                       mini_front_maxi_back,
                       maxi_front_mini_back}
                    );

        return ans; 

        
    }
};