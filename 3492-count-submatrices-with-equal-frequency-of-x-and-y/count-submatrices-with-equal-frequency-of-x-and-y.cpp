class Solution {
public:
    int numberOfSubmatrices(vector<vector<char>>& grid) {
       int m=grid.size();
       int n=grid[0].size();
       
       vector<vector<int>>prefix(m,vector<int>(n,0));
        vector<vector<int>>prefixx(m,vector<int>(n,0));
       for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(grid[i][j]=='X'){ 
                grid[i][j]=1;
                
            }
            else if(grid[i][j]=='Y') grid[i][j]=-1;
            else grid[i][j]=0;
        }
       } 
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            prefix[i][j]=grid[i][j];
            prefixx[i][j]=(grid[i][j]==1 ?1:0);
            if(i>0){
                 prefix[i][j]+=prefix[i-1][j];
                  prefixx[i][j]+=prefixx[i-1][j];

            }
            if(j>0) {
                 prefix[i][j]+=prefix[i][j-1];
                  prefixx[i][j]+=prefixx[i][j-1];
            }
            if(i>0 && j>0){
                 prefix[i][j]-=prefix[i-1][j-1];
                  prefixx[i][j]-=prefixx[i-1][j-1];
            }
        }
    }
    int cnt=0;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(prefix[i][j]==0 && prefixx[i][j]>0) cnt++;

        }
    }
     return cnt;
    }
};