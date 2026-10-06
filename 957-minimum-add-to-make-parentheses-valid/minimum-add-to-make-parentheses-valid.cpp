class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans=0,open=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                open++;
            }
            else if(s[i]==')' && open>0){
                open--;
            }
            else ans++;
        }
        return ans+open;
        
    }
};