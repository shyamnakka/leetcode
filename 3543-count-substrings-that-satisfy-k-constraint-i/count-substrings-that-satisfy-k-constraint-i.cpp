class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
        int cnt=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            int ones=0,zeros=0;
            for(int j=i;j<n;j++){
                if(s[j]=='1') ones++;
                else zeros++;
                 if(ones<=k || zeros<=k){
                cnt++;
            }
            }
           
        }
        return cnt;
    }
};