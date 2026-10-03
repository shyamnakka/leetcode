class Solution {
public:
    void backtrack(int start,int n,int k,vector<vector<int>>&ans, vector<int>&path){
        if(path.size()==k){
            ans.push_back(path);
            return;
        }
        for(int i=start;i<=n;i++){
            path.push_back(i);
            backtrack(i+1,n,k,ans,path);
            path.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int>path;
        vector<vector<int>>ans;
        int start=1;
        backtrack(start,n,k,ans,path);
        return ans;

        
    }
};