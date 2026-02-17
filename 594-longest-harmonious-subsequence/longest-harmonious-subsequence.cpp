class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int>mpp;
        int sum=0,maxsum=0;
        for(auto i:nums){
            mpp[i]++;
        }
        for(auto it:mpp){
            int x=it.first;
            if(mpp.count(x+1)){
                sum=mpp[x]+mpp[x+1];
                maxsum=max(sum,maxsum);
            }
        }
        return maxsum;
    
    }
};