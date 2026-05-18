class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int>map1,map2;
        for(int i=0;i<nums1.size();i++){
            map1[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++){
            map2[nums2[i]]++;

        }
        vector<int>ans;
        for(auto i:map1){
            if(map2.find(i.first)!=map2.end()){
                int freq1=i.second;
                int freq2=map2[i.first];
                int mini=min(freq1,freq2);
                for(int j=0;j<mini;j++){
                    ans.push_back(i.first);

                }

            }
        }
        return ans;

        
    }
};