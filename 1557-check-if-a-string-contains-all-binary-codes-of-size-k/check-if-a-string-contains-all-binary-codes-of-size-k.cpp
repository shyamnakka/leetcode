class Solution {
public:
    bool hasAllCodes(string s, int k) {
        if(k>s.size()) return false;
        set<string>st;
        for(int i=0;i<=s.size()-k;i++){
            st.insert(s.substr(i,k));
        }
        if(st.size()==(1<<k)) {
            return true;
        }
        else return false;
    }
};