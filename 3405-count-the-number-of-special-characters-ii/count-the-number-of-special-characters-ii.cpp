class Solution {
public:
    int numberOfSpecialChars(string word) {
         map<char,char>mp;
        for(char ch='a';ch<='z';ch++){  
                char upper=toupper(ch);
                int firstupper=word.find(upper);
                int lastlower=word.rfind(ch);
                if(word.find(ch)!=string::npos && word.find(upper)!=string::npos){
                    if(lastlower<firstupper){
                       mp[ch]=upper;
                    }
                }
        }
        return mp.size();
        
    }
};