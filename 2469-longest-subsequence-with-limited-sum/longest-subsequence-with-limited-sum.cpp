class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n=nums.size();
        int m=queries.size();
        vector<int>ans(m);
        int total=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
           total+=nums[i];
           nums[i]=total;
        }
        for(int i=0;i<m;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(nums[j]<=queries[i]) cnt++;
            }
            ans[i]=cnt;
        }
        return ans;
        
    }
};