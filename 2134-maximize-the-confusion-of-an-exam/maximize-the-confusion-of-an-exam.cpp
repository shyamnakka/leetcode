class Solution {
public:
    int maxConsecutiveAnswers(string answerKey, int k) {
        int n=answerKey.size();
        int l=0,r=0,count=0;
        int maxlengtht=0;
        while(r<n){
            if(answerKey[r]=='F') count++;
            while(count>k){
                if(answerKey[l]=='F') count--;
                l++;
            }
           int length=r-l+1;
            maxlengtht=max(maxlengtht,length);
            r++;
        }
        int i=0,j=0,countf=0,maxlengthf=0;
        while(j<n){
            if(answerKey[j]=='T') countf++;
            while(countf>k){
                if(answerKey[i]=='T') countf--;
                i++;
            }
            int length=j-i+1;
            maxlengthf=max(maxlengthf,length);
            j++;
        }
        int ans=max(maxlengtht,maxlengthf);
        return ans;

        
    }
};