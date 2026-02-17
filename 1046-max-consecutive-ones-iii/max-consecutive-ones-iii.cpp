class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int n=nums.size();
       int l=0,r=0,zerocnt=0,maxlength=0;;
       while(r<n){
        if(nums[r]!=1){
            zerocnt++;
            while(zerocnt>k){
                if(nums[l]!=1){
                    zerocnt--;
                }
                l++;
            }
        }
        int length=r-l+1;
        maxlength=max(maxlength,length);
        r++;
       } 
       return maxlength;
    }
};