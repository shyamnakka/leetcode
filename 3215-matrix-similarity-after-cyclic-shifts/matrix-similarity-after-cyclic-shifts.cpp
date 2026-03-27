class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        int m=mat.size();
        int n=mat[0].size();
        vector<vector<int>>duplicate(m,vector<int>(n,0));
        duplicate=mat;
        vector<vector<int>>ans(m,vector<int>(n,0));
        for(int x=0;x<k;x++){
            for(int i=0;i<m;i++){
                for(int j=0;j<n;j++){
                    if(i%2==0){
                        ans[i][j]=mat[i][(j-1+n)%n];
                    }
                    else{
                        ans[i][j]=mat[i][(i+j)%n];
                    }
                }
            }
            mat=ans;
        }
        if(ans==duplicate) return true;
        else return false;
        
    }
};