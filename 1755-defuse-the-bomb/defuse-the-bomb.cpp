class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n=code.size();
        vector<int>result(n,0);
        if(k==0) return result;
        if(k>0){
            for(int i=0;i<n;i++){
                int sum=0;
                for(int j=1;j<=k;j++){
                    int next=(i+j)%n;
                    sum+=code[next];
                }
                result[i]=sum;
            }
            return result;
        }
        if(k<0){
            k=-k;
            for(int i=0;i<n;i++){
                int sum=0;
                for(int j=1;j<=k;j++){
                    int prev=(i-j+n)%n;
                    sum+=code[prev];
                }
                result[i]=sum;
            }
            return result;
        }
       return result; 
    }
};