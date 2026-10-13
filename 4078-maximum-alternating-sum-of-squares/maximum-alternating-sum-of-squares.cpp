class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                nums[i]=nums[i]*-1;
            }
        }
        sort(nums.begin(),nums.end());
        vector<int>arr;
        int l=0,r=n-1;
        while(l<r){
            arr.push_back(nums[r]);
            arr.push_back(nums[l]);
            r--;
            l++;
        }
        if(l==r){
            arr.push_back(nums[l]);
        }
        for(int i=0;i<n;i++){
            if(i%2==0){
                ans+=(1LL*arr[i]*arr[i]);
            }
            else{
                ans-=(1LL*arr[i]*arr[i]);
            }
        }
        return ans;



        
    }
};