class Solution {
public:
    int maximumStrongPairXor(vector<int>& nums) {
        int maxi=0;
        int n=nums.size();       
for(int l=0;l<n;l++){
            int r=l;
            while(r<n){
                if(abs(nums[l]-nums[r])<=min(nums[l],nums[r])){
                    int ans=nums[l]^nums[r];
                    maxi=max(maxi,ans);
                }
                r++;
            }
        }
       return maxi;
    }
};