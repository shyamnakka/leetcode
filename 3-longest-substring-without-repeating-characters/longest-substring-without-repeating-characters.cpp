class Solution {
public:
    int lengthOfLongestSubstring(string s) {
      int n=s.size();
      int l=0,r=0,maxlen=0;
      vector<int>map(256,-1);
      while(r<n){
        if(map[s[r]!=-1]){
            if(map[s[r]]>=l){
                l=map[s[r]]+1;
            }
        }
        int length=r-l+1;
        maxlen=max(length,maxlen);
        map[s[r]]=r;
        r++;
      }
      return maxlen;
    }
};