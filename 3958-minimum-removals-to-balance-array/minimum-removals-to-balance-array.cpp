class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
             int n = nums.size();
        sort(nums.begin(), nums.end());

        int ans = n, right = 0;
        for (int left = 0; left < n; ++left) {
            while (right < n &&
                   nums[right] <=static_cast<long long>(nums[left]) * k) {
                ++right;
            }
            ans = min(ans, n - (right - left));
        }
        return ans;

        return ans;
        /*int n=nums.size();
        int ans=0;
        sort(nums.begin(),nums.end());
        int i=0,j=n-1;
        while(j>0){
            while(nums[i]<=k*nums[j]){
                ans=n-(j-i+1);
                break;
            }
            j--;
        }
        return ans;*/
    }
};