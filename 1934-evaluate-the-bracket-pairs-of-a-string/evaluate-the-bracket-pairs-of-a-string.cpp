class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        map<string,string>mpp;
        int k=knowledge.size();
        int n=s.size();
        string result;
        for(int i=0;i<k;i++){
            mpp[knowledge[i][0]]=knowledge[i][1];
        }
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                i++;
                string temp;
                while(s[i]!=')'){
                    temp+=s[i];
                    i++;
                }
                if(mpp.find(temp)!=mpp.end()){
                    result+=mpp[temp];
                }
                else{
                    result+='?';
                }
            }
            else{
                result+=s[i];
            }
        }
        return result;
        
    }
};