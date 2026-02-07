class Solution {
public:
    int numberOfSubstrings(string s) {
        int n=s.size();
        int l=0,total=0;
        int cnt[3]={0,0,0};
        for(int r=0;r<n;r++){
            cnt[s[r]-'a']++;
            while(cnt[0]>0 && cnt[1]>0 && cnt[2]>0){
                total+=(n-r);
                cnt[s[l]-'a']--;
                l++;
            }
            
        }
         return total;
        }
       

    
};