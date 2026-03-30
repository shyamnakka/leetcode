class Solution {
public:
    bool checkStrings(string s1, string s2) {
        int n=s1.size();
        int evencnt=0,oddcnt=0;
        vector<int>s1even(26,0),s2even(26,0);
        vector<int>s1odd(26,0),s2odd(26,0);
        for(int i=0;i<n;i++){
            if(i%2==0){
               s1even[s1[i]-'a']++;
               s2even[s2[i]-'a']++;
            }
            else{
               s1odd[s1[i]-'a']++;
               s2odd[s2[i]-'a']++;
            }

        }
        if(s1even==s2even && s1odd==s2odd)  return true;
        else return false;
           
        

        
    }
};