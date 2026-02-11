class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        long long n=nums.size();
        long long ans=0,cnt=0;
        long long maxi=*max_element(nums.begin(),nums.end());
        int l=0;
        for(int r=0;r<n;r++){
            if(nums[r]==maxi) cnt++;
            while(cnt>=k){
                ans+=(n-r);
                if(nums[l]==maxi) cnt--;
                l++;
            }
        }
        return ans;
    }
};