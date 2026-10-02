class Solution {
public:
    void backtrack(string s,int open,int close,int n,vector<string>&ans){
        if(s.size()==n*2){
            ans.push_back(s);
            return;
        }
        if(open<n){
            s.push_back('(');
            open++;
            backtrack(s,open,close,n,ans);
            open--;
            s.pop_back();
        }
        if(close<open){
            s.push_back(')');
            close++;
            backtrack(s,open,close,n,ans);
            close--;
            s.pop_back();
        }
    }
    vector<string> generateParenthesis(int n) {
        string s;
        vector<string>ans;
        int open=0,close=0;
        backtrack(s,open,close,n,ans);
        return ans;
        
    }
};