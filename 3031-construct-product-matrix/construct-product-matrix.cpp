class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<vector<int>>leftproduct(n,vector<int>(m,0));
        vector<vector<int>>rightproduct(n,vector<int>(m,0));
        long long mul=1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                mul=(mul*grid[i][j])%12345;
                leftproduct[i][j]=mul;
            }
        }
        long long mul2=1;
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                mul2=(mul2*grid[i][j])%12345;
                rightproduct[i][j]=mul2;
            }
        }
        vector<vector<int>>result(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int pos=i*m+j;
                int total=n*m;
                if(pos==0){
                    if(total==1){
                        result[i][j]=1;
                    }
                    else if(j < m - 1) {
                        result[i][j] = rightproduct[i][j + 1]%12345;
                    }
                    else{
                        result[i][j]=rightproduct[i+1][0]%12345;

                    }
                }
                else if(pos==total-1){
                    if(total==1){
                        result[i][j]=1;

                    }
                    else if(j > 0) {
                        result[i][j] = leftproduct[i][j - 1]%12345;
                    }
                    else{
                        result[i][j]=leftproduct[i-1][m-1]%12345;

                    }
                }
                else{
                    long long previous,next;
                    if(j>0){
                         previous=leftproduct[i][j-1];
                    }
                    else previous=leftproduct[i-1][m-1];
                    if(j<m-1){
                         next=rightproduct[i][j+1];
                    }
                    else{
                        next=rightproduct[i+1][0];
                    }
                    result[i][j]=(1LL*previous*next)%12345;

                }
            }
        }
        return result;
    }
};