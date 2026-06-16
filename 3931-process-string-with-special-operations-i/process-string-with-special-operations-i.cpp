class Solution {
public:
    string processStr(string s) {
        string result;
        for(char ch:s){
            if(islower(ch)){
                result.push_back(ch);
            }
            else if(ch=='*'){
                
                int n=result.size();
                if(n>0){
                result.erase(n-1,1);     
                }
            }
            else if(ch=='#'){
                result.append(result);
            }
            else if(ch=='%'){
                reverse(result.begin(),result.end());
            }
        }
        return result;

        
    }
};