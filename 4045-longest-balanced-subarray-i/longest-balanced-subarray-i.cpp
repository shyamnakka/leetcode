class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int n=nums.size();
        int maxlength=0;
        set<int>evenset;
        set<int>oddset;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(nums[j]%2==0) evenset.insert(nums[j]);
                else oddset.insert(nums[j]);
                if(evenset.size()==oddset.size()) maxlength=max(maxlength,j-i+1);
            }
            evenset.clear();
            oddset.clear();
        }
        return maxlength;

        
    }
};