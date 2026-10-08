class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans;
        int balance=0;
        int start,end;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                balance++;
                if(balance==1){
                     start=i;
                }
            }
            else{
                balance--;
                if(balance==0){
                     end=i;
                    for(int j=start+1;j<end;j++){
                        ans+=s[j];
                    }
                    balance=0;
                }
            }
        }
        return ans;
        
    }
};