class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
        unordered_map<int,int>mp;
        for(auto v:nums1){
            mp[v[0]]+=v[1];
        }
        for(auto v:nums2){
            mp[v[0]]+=v[1];
        }
        vector<vector<int>>result;
        for(auto i:mp){
            result.push_back({i.first,i.second});
        }
        sort(result.begin(),result.end());
        return result;
    }
};