class Solution {
public:
     int minisum(vector<int>&ans){
        int mini=INT_MAX;
        int idx=-1;
        for(int i=0;i<ans.size()-1;i++){
            if(ans[i]+ans[i+1]<mini){
                mini=ans[i]+ans[i+1];
                idx=i;
            }
        }
        return idx;
     }
     void mergepair(vector<int>&ans,int idx){
        ans[idx]=ans[idx]+ans[idx+1];
        ans.erase(ans.begin()+idx+1);
     }
    int minimumPairRemoval(vector<int>& nums) {
      int cnt=0;
      while(!is_sorted(nums.begin(),nums.end())){
        mergepair(nums,minisum(nums));
        cnt++;
      } 
      return cnt; 
    }
};