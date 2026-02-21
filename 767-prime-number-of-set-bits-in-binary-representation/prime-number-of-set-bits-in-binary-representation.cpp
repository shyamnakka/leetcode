class Solution {
public:
    int countPrimeSetBits(int left, int right) {
        int primecnt=0;
        for(int i=left;i<=right;i++){
            int n=i;
            int cnt=0;
            while(n>0){
                if(n&1) cnt++;
                n=n>>1;
            }
            if(cnt<2) continue;
            bool isprime=true;
            for(int j=2;j*j<=cnt;j++){
                if(cnt%j==0){
                    isprime=false;
                    break;
                }
            }
            if(isprime){
            primecnt++;
            }
    
        }
        return primecnt;
    }
};