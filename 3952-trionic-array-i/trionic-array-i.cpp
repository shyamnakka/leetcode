class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n=nums.size();
        if(n<3) return false;
        bool st=true,p=false,q=false,end=false;
        for(int i=1;i<n;i++){
            if(!q && nums[i]>nums[i-1]){
                p=true;
            }
            else if(!end && p && nums[i]<nums[i-1]){
                q=true;
            }
            else if(p && q && nums[i]>nums[i-1]){
                end=true;
            }
            else return false;
        }
        return (st&&p&&q&&end);
    }
};