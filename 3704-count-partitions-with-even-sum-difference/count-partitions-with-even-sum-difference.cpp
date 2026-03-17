class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n=nums.size();
        int prefix=0,cnt=0;
        for(int i=0;i<n;i++){
            prefix+=nums[i];
            nums[i]=prefix;

        }
        for(int i=0;i<n-1;i++){
            int sumdiff=nums[i]-(nums[n-1]-nums[i]);
            if(sumdiff%2==0) cnt++;
        }
        return cnt;
    }
};