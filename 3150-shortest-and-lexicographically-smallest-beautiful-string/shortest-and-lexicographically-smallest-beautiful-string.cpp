class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.size();
        int mini=INT_MAX;
        string ans;
        for(int i=0;i<n;i++){
            int ones=0;
            string curr;
            for(int j=i;j<n;j++){
                curr=curr+s[j];
                if(s[j]=='1') ones++;
                if(ones==k){
                    int size=j-i+1;
                    if(mini>size){
                        ans=curr;
                        mini=size;
                    }
                    if(mini==size){
                        if(ans>curr){
                            ans=curr;
                        }
                    }
                }
            }
        }
        return ans;
        
    }
};