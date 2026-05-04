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
            for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                    swap(mat[i][j],mat[j][i]);
                }
            }
            for(int i=0;i<n;i++){
                reverse(mat[i].begin(),mat[i].end());
            }
        }
        
        if(possible) return true;
        else return false;    
    }
};