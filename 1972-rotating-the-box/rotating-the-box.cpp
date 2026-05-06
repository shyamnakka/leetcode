class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& boxGrid) {
        int m=boxGrid.size();
        int n=boxGrid[0].size();
        vector<vector<char>>rotated(n,vector<char>(m));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                rotated[j][m-1-i]=boxGrid[i][j];
            }
        }
        for(int j=0;j<m;j++){
            for(int i=n-1;i>0;i--){
                if(rotated[i][j]=='.'){
                    int k=i-1;
                    while(k>=0 && rotated[k][j]=='.'){
                        k--;
                    }
                    if(k>=0 && rotated[k][j]=='#'){
                        int fall=k;
                        while(fall+1<n && rotated[fall+1][j]=='.'){
                            swap(rotated[fall+1][j],rotated[fall][j]);
                            fall++;
                        }
                    }
                }
            }
        }
        return rotated;
        
    }
};