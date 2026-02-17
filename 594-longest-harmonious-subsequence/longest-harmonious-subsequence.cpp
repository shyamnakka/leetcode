class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int,int>mpp;
        int maxsum=0,sum=0;
        
        for(auto i:nums){
            mpp[i]++;
        }
        for(auto it=mpp.begin();it!=mpp.end();){
            auto next=it;
            next++;
            if(next==mpp.end()) break;
            if(next->first-it->first==1){
                sum=it->second+next->second;
                maxsum=max(maxsum,sum);
            }
            it++;
        }
        return maxsum;
    }
};