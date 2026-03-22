class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n=mat.size();    
        bool possible=false;
        for(int rotation=0;rotation<4;rotation++){
            if(mat==target){
                    possible=true;
                    break;
            } 
            vector<vector<int>>ans(n,vector<int>(n)); 
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    ans[i][j]=mat[n-1-j][i];
                }
            }
            mat=ans;
        }
        
        if(possible) return true;
        else return false;    
    }
};