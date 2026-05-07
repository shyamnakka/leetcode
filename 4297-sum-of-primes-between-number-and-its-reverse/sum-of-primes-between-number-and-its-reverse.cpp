class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int r=0;
        int original=n;
        while(n>0){
            int k=n%10;
            r=r*10+k;
            n=n/10;
        }
        //if(original==r) return 0;
        int x=min(original,r);
        int y=max(original,r);
        int sum=0;
        for(int i=x;i<=y;i++){
            if(i<2) continue;
            bool isprime=true;
            for(int prime=2;prime*prime<=i;prime++){
                if(i%prime==0){
                    isprime=false;
                    break;
                }
            }
            if(isprime) sum+=i;
        }
        return sum;
        
    }
};