class Solution {
public:
    int minimumRecolors(string blocks, int k) {
        int n=blocks.size();
        int mini=INT_MAX;
      for(int l=0;l<n-k+1;l++){
            int size=l+k-1;
            int r=l;
            int whitecnt=0,blackcnt=0;
            while(r<=size){
                if(blocks[r]!='B'){
                    whitecnt++;
                }
                else blackcnt++;
                r++;
            }
            if(blackcnt==k){
                return 0;
            }
            else {
                mini=min(mini,whitecnt);
            }
      } 
      return mini; 
    }
};