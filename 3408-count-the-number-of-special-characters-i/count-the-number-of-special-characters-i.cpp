class Solution {
public:
    int numberOfSpecialChars(string word) {
        map<char,char>mp;
        for(char ch:word){
            if(islower(ch)){
                char upper=toupper(ch);
                if(word.find(upper)!=string::npos){
                    mp[ch]=upper;
                }
            }
        }
        return mp.size();
        
    }
};