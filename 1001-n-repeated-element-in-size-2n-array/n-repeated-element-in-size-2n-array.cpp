class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size();
        map<int,int>mapp;
        for(auto num:nums){
            mapp[num]++;
        }
        for(auto i:mapp){
            if(i.second>1){
                return (i.first);
            }
        }

        return 0;
    }
};