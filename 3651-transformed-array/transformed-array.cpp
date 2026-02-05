class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>result(n);
        for(int i=0;i<n;i++){
            int k=nums[i];
            if(k>0){
                int right=(i+k)%n;
                result[i]=nums[right];
            }
            else if(k<0){
                int left=(i-abs(k)%n+n)%n;
                result[i]=nums[left];
            }
            else result[i]=0;
        }
        return result;
    }
};