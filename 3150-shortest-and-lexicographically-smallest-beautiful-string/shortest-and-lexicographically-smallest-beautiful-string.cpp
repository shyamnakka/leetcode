class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n=s.size();
        int mini=INT_MAX;
        int l=0,r=0,ones=0;
        string ans;
        while(r<n){
            if(s[r]=='1') ones++;
            while(ones==k){
                int len=r-l+1;
                if(mini>len){
                    mini=len;
                    ans=s.substr(l,len);
                }
                else if(mini==len){
                    string curr=s.substr(l,len);
                    if(ans>curr){
                        ans=curr;
                    }
                }
                if(s[l]=='1') ones--;
                l++;
            }
            r++;
        }
        return ans;
        
        
    }
};