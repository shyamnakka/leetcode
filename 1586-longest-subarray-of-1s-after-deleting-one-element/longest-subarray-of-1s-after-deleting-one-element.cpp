class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int onecnt=0,zerocnt=0,maxlen=0;
        int l=0;
        for(int r=0;r<n;r++){
            if(nums[r]==0) zerocnt++;
            while(zerocnt>1){
                if(nums[l]==0){
                    zerocnt--;
                }
                l++;
            }
            maxlen=max(maxlen,r-l);  
        }
        return maxlen;
    }
};
