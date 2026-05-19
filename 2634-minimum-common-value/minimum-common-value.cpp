class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>map;
        for(int i=0;i<nums1.size();i++){
            map[nums1[i]]++;
        }
        int ans=-1;
        for(auto i:nums2){
            if(map.find(i)!=map.end()){
                 ans=i;
                break;
            }
        }
        return ans;

        
    }
};