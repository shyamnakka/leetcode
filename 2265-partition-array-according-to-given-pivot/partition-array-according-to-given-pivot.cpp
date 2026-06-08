class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>lessthan,equalto,greater,ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot) lessthan.push_back(nums[i]);
            else if(nums[i]>pivot) greater.push_back(nums[i]);
            else equalto.push_back(nums[i]);
        }
        ans.insert(ans.end(),lessthan.begin(),lessthan.end());
        ans.insert(ans.end(),equalto.begin(),equalto.end());
        ans.insert(ans.end(),greater.begin(),greater.end());
        return ans;
             
        
    }
};