class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size();
        int lettercnt=0,spacecnt=0;
        for(int i=n-1;i>=0;i--){
            if(s[i]==' ') spacecnt++;
             else if(lettercnt!=0 && spacecnt>0) break;
            else {
                lettercnt++;
                spacecnt=0;
            }

        }
        return lettercnt;
        
    }
};