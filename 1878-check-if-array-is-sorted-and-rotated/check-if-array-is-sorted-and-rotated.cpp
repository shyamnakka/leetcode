class Solution {
public:
    bool check(vector<int>& nums) {
        bool isgood=false;
        int n=nums.size();
        vector<int>sortarr= nums;
        sort(sortarr.begin(),sortarr.end());
        for(int i=0;i<=n-1;i++){
            if(sortarr==nums){
                isgood=true;
                break;
            }
            else{
                rotate(nums.begin(),nums.end()-1,nums.end());
            }
        }
        if(isgood) return true;
        else return false;
        
    }
};