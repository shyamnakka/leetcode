class Solution {
public:
    bool divideArray(vector<int>& nums) {
       map<int,int>mpp;
       int n=nums.size();
       for(auto it:nums){
        mpp[it]++;
       } 
       bool result=true;
       for(auto it:mpp){
           if(it.second%2!=0){
            result=false;
            break;
           }
       }
       return result;
        
    }
};