class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lftsum=0,rgtsum=0,maxsum=0;
        int n=cardPoints.size();
        for(int i=0;i<k;i++){
            lftsum+=cardPoints[i];
            maxsum=lftsum;
        }
        int rgtindex=n-1;
        for(int i=k-1;i>=0;i--){
            lftsum=lftsum-cardPoints[i];
            rgtsum+=cardPoints[rgtindex];
            rgtindex--;
            maxsum=max(maxsum,lftsum+rgtsum);
        }
        return maxsum;

        
    }
};