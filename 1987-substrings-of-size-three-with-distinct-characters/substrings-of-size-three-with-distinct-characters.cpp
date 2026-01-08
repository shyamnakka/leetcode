class Solution {
public:
    int countGoodSubstrings(string s) {
        int lft=0,cnt=0;
        int n=s.size();
        while(lft<n-2){
            int rgt=lft;
            unordered_set<char>st;
            while(rgt<lft+3){
                st.insert(s[rgt]);
                rgt++;
            }
            if(st.size()==3){
                cnt++;
                
            }
           lft++;

        }
        return cnt;
    }
};