class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n=nums.size();
        bool istrue=false;
        int maxi=*max_element(nums.begin(),nums.end());
        if((maxi+1)!=n) return false;
        map<int,int>mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(int i=1;i<=maxi;i++){
            if(i==maxi){
                if(mpp[i]==2) istrue=true;
            }
            else{
                if(mpp[i]!=1){
                    break;
                }
            }
        }
        if(istrue) return true;
        else return false;

        
    }
};