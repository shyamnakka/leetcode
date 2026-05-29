class Solution {
public:
    int minElement(vector<int>& nums) {
        int mini=INT_MAX;
        for(auto i:nums){
            int sum=0;
            string s=to_string(i);
            for(char ch:s){
                int digit=ch-'0';
                sum+=digit;
            }
            mini=min(mini,sum);
        }
        return mini;
        
    }
};