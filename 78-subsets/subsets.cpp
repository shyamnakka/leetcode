class Solution {
public:
    void backtrack(int index,vector<vector<int>>&ans,vector<int>&path,vector<int>& nums){
        if(index==nums.size()){
            ans.push_back(path);
            return;
        }
        path.push_back(nums[index]);
        backtrack(index+1,ans,path,nums);
        path.pop_back();
        backtrack(index+1,ans,path,nums);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
     vector<vector<int>>ans;
     vector<int>path;
     int index=0;
     backtrack(index,ans,path,nums);
     return ans;
    }
};