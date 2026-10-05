class Solution {
public:
    int scoreOfParentheses(string s) {
        int ans=0,depth=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                depth++;
            }
            else{
                if(s[i-1]=='('){
                    int val=1;
                    for(int j=1;j<depth;j++){
                        val*=2;
                    }
                    ans+=val;
                }
                depth--;
            }
        }
        return ans;
        
    }
};