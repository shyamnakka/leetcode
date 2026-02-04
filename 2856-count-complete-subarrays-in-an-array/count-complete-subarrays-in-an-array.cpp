class Solution {
public:
    int countCompleteSubarrays(vector<int>& nums) {
        int n=nums.size();
        set<int>st(nums.begin(),nums.end());
        int k=st.size();
        int cnt=0;
        for(int l=0;l<n;l++){
            int r=l;
            set<int>set;
            while(r<n){
                set.insert(nums[r]);
                if(set.size()==k) cnt++;
                r++;
            }
            set.clear();
        }
        return cnt;
    }
};