class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
       for(int i=1;;i++){
        if(i%k==0){
            if(find(nums.begin(),nums.end(),i)==nums.end()){
                return i;
            }
        }
       }
       return -1;
    }
};