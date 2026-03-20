class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
        int n=nums.size();
        set<int>set;
        for(int i=0;i<n;i++){
            int start=nums[i][0];
            int end=nums[i][1];
            for(int i=start;i<=end;i++){
                set.insert(i);
            }
        }
        return set.size();
        
    }
};