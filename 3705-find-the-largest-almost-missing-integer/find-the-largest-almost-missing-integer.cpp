class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int>mpp;
        for(int it:nums){
            mpp[it]++;
        }
        int maxi=-1;
        if(k==1){
            for(auto it:mpp){
                if(it.second==1){
                    maxi=max(maxi,it.first);
                }
            }
        }
        else if(k==n){
            maxi=*max_element(nums.begin(),nums.end());
        }
        else{
            int start=nums[0],end=nums[n-1];
            if(mpp[start]==1  && mpp[end]!=1){
                maxi=start;
            }
            else if(mpp[end]==1  && mpp[start]!=1){
             maxi=end;
            }
            else if(mpp[start]==1  && mpp[end]==1){
                maxi=max(start,end);
            }
        }
        return maxi;

        
    }
};