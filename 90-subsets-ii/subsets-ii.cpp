class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>unqset;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int subset=1<<n;
        for(int num=0;num<subset;num++){
            vector<int>list;
            for(int i=0;i<n;i++){
                if(num&(1<<i)){
                    list.push_back(nums[i]);
                }
            }
            unqset.insert(list);
        }
        return std::vector<std::vector<int>>(unqset.begin(),unqset.end());
        
    }
};