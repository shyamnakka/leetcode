class Solution {
public:
    vector<string> twoEditWords(vector<string>& queries, vector<string>& dictionary) {
        vector<string>result;
        for(int i=0;i<queries.size();i++){
            int n=queries[i].size();
            for(int j=0;j<dictionary.size();j++){
                int edits=0;
                for(int k=0;k<n;k++){
                    if(queries[i][k]!=dictionary[j][k]) edits++;
                }
                if(edits<=2){
                    result.push_back(queries[i]);
                    break;
                }
            }
        }
        return result;
        
    }
};