class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.size();i++){
            int pos='z'-s[i]+1;
            int ans=pos*(i+1);
            sum+=ans;
        }
        return sum;
    }
};