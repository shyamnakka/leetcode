class Solution {
public:
    int returnToBoundaryCount(vector<int>& nums) {
        
        int n=nums.size();
        vector<int>arr(n);
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            arr[i]=sum;
        }
        int cnt=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0) cnt++;
        }
        return cnt;

    }
};