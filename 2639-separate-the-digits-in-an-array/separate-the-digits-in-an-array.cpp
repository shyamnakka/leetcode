class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            string s= to_string(nums[i]);
            for(char digit:s){
                ans.push_back(digit-'0');
            }  
        }
        return ans;
        
    }
};