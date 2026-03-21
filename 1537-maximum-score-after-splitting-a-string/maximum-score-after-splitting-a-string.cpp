class Solution {
public:
    int maxScore(string s) {
        int n=s.size();
        int totalones=0;
        for(char i:s){
            if(i=='1') totalones++;
        }
        int ones=totalones;
        int zeros=0,ans=0;
        for(int i=0;i<n-1;i++){
            if(s[i]=='0') zeros++;
            else ones--;
            ans=max(ans,zeros+ones);
        }
        return ans;
        
    }
};
