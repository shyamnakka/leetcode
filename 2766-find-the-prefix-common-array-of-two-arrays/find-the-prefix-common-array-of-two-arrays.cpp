class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        unordered_map<int,int>mpp;
        vector<int>ans;
        int n=A.size();
        for(int i=0;i<n;i++){
            int cnt=0;
            mpp[A[i]]++;
            mpp[B[i]]++;
            for(auto i:mpp){
                if(i.second>=2){
                    cnt++;
                }
            }
            ans.push_back(cnt);
        }
        return ans;
        
    }
};
