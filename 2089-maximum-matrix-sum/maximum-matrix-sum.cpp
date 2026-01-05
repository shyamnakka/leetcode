class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int miniabs=INT_MAX;
        long long ans=0,cnt=0;
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int value=matrix[i][j];
                miniabs=min(miniabs,abs(value));
                ans+=abs(value);
                if(value<0) cnt++;
            }
        }
        if(cnt%2!=0) ans=ans-2*miniabs;
        return ans;
        
    }
};